#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ILI9341.h> //for tft spi 2.8" screen
#include <Arduino.h>
#include "PCF8574.h"
#include <Adafruit_I2CDevice.h>

#define mosi   12
#define sclk   14
#define miso   13
#define net_ss 24
 
#define TFT_CS        15
#define TFT_RST       -1 // Or set to -1 and connect to Arduino RESET pin
#define TFT_DC        4
#define TFT_BACKLIGHT -1 // Display backlight pin
#define pcf_addr 0x20
Adafruit_ILI9341 tft = Adafruit_ILI9341 (TFT_CS, TFT_DC, mosi, sclk, TFT_RST);

 PCF8574 pcf(pcf_addr);

//PCF8574 pins
//pcf
#define rtc_int    0
#define sim_pwr    1
#define up         2
#define left       3
#define down       4
#define right      5
#define ok         6
#define set        7

void setup() {
  // put your setup code here, to run once:
   tft.begin();
      //tft action and test
      tft.fillScreen(ILI9341_BLACK);
      tft.setCursor(0, 0);
      tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(3);
      tft.println("Hello. WELCOME!");
      tft.println("PRESS BUTTON");
     //pcf
     Wire.begin();
     pcf.begin();
     tft.fillScreen(ILI9341_BLACK); //CLEAR SCREEN
}

void loop() {
  // put your main code here, to run repeatedly:
   if(!pcf.readButton(up)) 
   {
    Serial.println("up Button Pressed");
    tft.fillScreen(ILI9341_BLACK); //CLEAR SCREEN
     tft.setCursor(0, 0);
      tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(3);
      tft.println("UP");
   }
   
   if(!pcf.readButton(left)) 
   {
        tft.fillScreen(ILI9341_BLACK); //CLEAR SCREEN
     tft.setCursor(0, 0);
      tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(3);
      tft.println("LEFT");
    Serial.println("left Button Pressed");
   }
   if(!pcf.readButton(down)){
        tft.fillScreen(ILI9341_BLACK); //CLEAR SCREEN
     tft.setCursor(0, 0);
      tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(3);
      tft.println("DOWN");
    Serial.println("down Button Pressed");
   }
   if(!pcf.readButton(right)){
        tft.fillScreen(ILI9341_BLACK); //CLEAR SCREEN
     tft.setCursor(0, 0);
      tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(3);
      tft.println("RIGHT");
    Serial.println("right Button Pressed");
   }
   if(!pcf.readButton(ok)){
        tft.fillScreen(ILI9341_BLACK); //CLEAR SCREEN
     tft.setCursor(0, 0);
      tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(3);
      tft.println("OK");
    Serial.println("ok Button Pressed");
   }

}
