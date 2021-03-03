/*
Setting for whole project
use: #include "config.h"

NFC pins:
  PN532 SDA -> EFM32 D21 Pin (with 4.7K resistor already present)
  PN532 SCL -> EFM32 D22 Pin(with 4.7K resistor already present)
  PN532 IRQ -> EFM32 D4 Pin
  PN32 RST0 -> EFM32 D5 Pin
  PN532 3.3v -> 3.3v
  PN532 GND -> GND

IR pins:
  Digital inputs -> D3 pin

LED pins:
  Digital inputs -> D2 pin

*/
/**************************************************************************/

#ifndef CONFIG_H
#define CONFIG_H

#include "Arduino.h"
#include <LiquidCrystal.h>

#define playerCount 2

///IR beam
#define IRbeam 18
#define LEDPIN 2

#define detectDelay 10
#define downDelay 10

///NFC sensor
#define PN532_IRQ 4
#define PN532_RESET 5

#define cardDetectDelay 2000
#define DELAY_BETWEEN_CARDS 500

///Login

///LCD scherm
<<<<<<< Updated upstream
#define rs 19
=======
#define rs 33 
>>>>>>> Stashed changes
#define en 32
#define d4 25
#define d5 26
#define d6 27
#define d7 13
//
//LiquidCrystal lcd(rs, en, d4, d5, d6, d7);                  //Deze defined de lcd pinnen al denk ik

///MQTT
//_C is nodig omdat de naam anders overlapt met andere variabelen van een library, c heeft niet echt een betekenis
//#define SSID_C "wie dit leest is dom"
<<<<<<< Updated upstream
//#define PWD_C "stefissexy"
//#define MQTT_SERVER "broker.hivemq.com"
#define SSID_C "NETGEAR68"
#define PWD_C "excitedtuba713"
=======

#define SSID_C "NETGEAR68"
//#define PWD_C "stefissexy"
#define PWD_C "excitedtuba713"
//#define MQTT_SERVER "broker.hivemq.com"
>>>>>>> Stashed changes
#define MQTT_SERVER "192.168.1.2"
#define MQTT_PORT 1883

#define clientID "ESP32ontsmetting"
//#define username NULL
//#define password NULL
//als de esp32 verbinding verliest zal er een will bericht worden uit gestuurd
//hier kan men kiezen wat en waar
#define willTopic_c "esp32/ontsmetten/control"
#define willQoS_c 0
#define willRetain_c false
#define willMessage_c "hhhhhelp, ik peis dak een probleem eb"

#endif /*CONFIG_H*/