/*
 *   Tested with "WiFi Smart Socket ESP8266 MQTT"
 *   and "Sonoff - WiFi Wireless Smart Switch ESP8266 MQTT"
 *
 *   The Relay could be toggeled with the physical pushbutton
*/
#include "main.hpp"

#define DEBUG

// Define Nodes
  RelayNode   relayNode1("relay1", PIN_RELAY1);
  RelayNode   relayNode2("relay2", PIN_RELAY2);
  RelayNode   relayNode3("relay3", PIN_RELAY3);
  RelayNode   relayNode4("relay4", PIN_RELAY4);


// Initialize button node with callback to button press
  ButtonNode  buttonNode1("button1", PIN_BUTTON1, []() {
    relayNode1.toggleRelay();
  });
  ButtonNode  buttonNode2("button2", PIN_BUTTON2, []() {
    relayNode2.toggleRelay();
  });
  ButtonNode  buttonNode3("button3", PIN_BUTTON3, []() {
    relayNode3.toggleRelay();
  });
  ButtonNode  buttonNode4("button4", PIN_BUTTON4, []() {
    relayNode4.toggleRelay();
  });
  ButtonNode  buttonNode5("button5", PIN_BUTTON5, []() {
    ESP.reset();
  });


// -----------------------------------------------------------------------------
// Setup Hardware
// -----------------------------------------------------------------------------

void setupHardware() {
      Serial.begin(SERIAL_BAUDRATE);
      Serial.println();
      Serial.println();

      Homie.getLogger() << "[setupHardware] finished\n\n\n" << endl;

}

// -----------------------------------------------------------------------------
// Setup Homie
// -----------------------------------------------------------------------------

void setupHomie() {
  Homie_setFirmware(APP_NAME, APP_VERSION);
  Homie.setLedPin(PIN_LED, LOW);
  Homie.setResetTrigger(PIN_BUTTON1, LOW, 10000);  // BTN0 = Flash = BTN_A set to 10sec

  Homie.setup();
  Homie.getLogger() << "[setupHomie] finished" << endl;
}


// -----------------------------------------------------------------------------
// setup
// -----------------------------------------------------------------------------

void setup() {
  setupHardware();
  welcome();
  otaSetup(OTA_PORT, OTA_PASS);
  setupHomie();

}


// -----------------------------------------------------------------------------
// Loop
// -----------------------------------------------------------------------------

void loop() {
  Homie.loop();
  otaLoop();
}
