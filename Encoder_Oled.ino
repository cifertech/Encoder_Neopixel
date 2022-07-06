#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include <Adafruit_NeoPixel.h>
#define LED_PIN     2
#define LED_COUNT  20
#define BRIGHTNESS 50

#include <Encoder.h>
Encoder myEnc(5, 6);
long oldPosition  = 255;

int pushButton = 2;

Adafruit_SSD1306 display = Adafruit_SSD1306(128, 32, &Wire);
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRBW + NEO_KHZ800);

int R;
int G;
int B;

void setup() {
  
    Serial.begin(9600);
  
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
    delay(1000);
  display.clearDisplay();
  display.display();

  strip.begin();           
  strip.show();         
  strip.setBrightness(BRIGHTNESS);

  pinMode(pushButton, INPUT);

}

void loop() {
  
long newPosition = myEnc.read();
int buttonState = digitalRead(pushButton);

if (pushButton==HIGH)
          {
    if (newPosition != oldPosition) {
      oldPosition = newPosition; 
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.print("Red   :  ");
  display.println(newPosition);
  display.setCursor(0,0);
  display.display(); 

  delay(5);

    }
          }
    
else
{
    if (newPosition != oldPosition) {
      oldPosition = newPosition; 
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.print("Blue   :  ");
  display.println(newPosition);
  display.setCursor(0,10);
  display.display(); 
  display.clearDisplay();  
  delay(5);

  }
}
Serial.println(buttonState);
  
 }

 
