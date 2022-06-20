// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID           "BLYNK_TEMPLATE_ID"
#define BLYNK_DEVICE_NAME           "MyDeviceName"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
#define USE_WEMOS_D1_MINI

#include <ESP8266WiFi.h>
#include "BlynkEdgent.h"
#define pin 5 // D1

BLYNK_WRITE(V0) {
  if (param.asInt()==1){
    Serial.println("turned on");
    digitalWrite(pin, LOW);
    delay(500);
    digitalWrite(pin, HIGH);
  }
   if (param.asInt()==0){
    Serial.println("turned off");
    digitalWrite(pin, LOW);
    delay(500);
    digitalWrite(pin, HIGH);
  }
}

void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  BlynkEdgent.begin();
  
}

void loop() {
  BlynkEdgent.run();
}
