#ifndef SRC_CONFIG_H
#define SRC_CONFIG_H

//------------------------------------------------------------------------------
// APP
//------------------------------------------------------------------------------

#define APP_NAME                "homie-IteadSonoff_4CH"
#define APP_VERSION             "2.0.1"
#define APP_AUTHOR              "yves@laedis.ch"
#define APP_WEBSITE             "http://yves.laedis.ch"

// -----------------------------------------------------------------------------
// HARDWARE
// -----------------------------------------------------------------------------

#define SERIAL_BAUDRATE         115200

#define PIN_LED     13      // PIN 12 / HSPI_MOSI; UART0_CTS MTCK
#define PIN_RELAY1     12
#define PIN_RELAY2      5
#define PIN_RELAY3      4
#define PIN_RELAY4     15
#define PIN_BUTTON1     0
#define PIN_BUTTON2     9
#define PIN_BUTTON3    10
#define PIN_BUTTON4    14
#define PIN_BUTTON5    2 // Pin on prg Header



// -----------------------------------------------------------------------------
// Configuration
// -----------------------------------------------------------------------------

#define OTA_PASS                "assugrin"
#define OTA_PORT                8266

// -----------------------------------------------------------------------------



#endif /* end of include guard: SRC_CONFIG_H */
