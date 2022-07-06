#include <Adafruit_NeoPixel.h>  
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN 6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(130, 6, NEO_GRB + NEO_KHZ800);

int R = 0; int G = 0; int B = 0; 
int OldLamp;

#define BUTTON_PIN   4    

const int buttonPin = 4;
const int PinA = 2; 
const int PinB = 3;  

int lastCount = 0;

volatile int virtualPosition = 365;

int pos = 0;

bool oldState = HIGH;
int showType = 0;


void time ()  {
  static unsigned long lastInterruptTime = 0;
  unsigned long interruptTime = millis();

  if (interruptTime - lastInterruptTime > 20) {
    if (digitalRead(PinB) == LOW)
    {
      virtualPosition-- ; 
    }
    else {
      virtualPosition++ ; 
    }

    lastInterruptTime = interruptTime;
  }
}


void setup() {  
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Serial.begin(9600);

  pinMode(PinA, INPUT);
  pinMode(PinB, INPUT);

  attachInterrupt(digitalPinToInterrupt(PinA), time, LOW);

  Serial.println("Start");
  strip.begin();
    strip.setBrightness(120);
}


boolean checkPos(){

  if (virtualPosition != lastCount) {

    lastCount = virtualPosition ;
  
    pos = abs(virtualPosition % 36);

    Serial.println(pos);
    return true;
  }
  return false;
}


void loop() {

  bool newState = digitalRead(BUTTON_PIN);

  if (newState == LOW && oldState == HIGH) {
    delay(20);
    newState = digitalRead(BUTTON_PIN);
    if (newState == LOW) {
      showType++;
      if (showType > 1)
        showType=0;
    }
  }

  oldState = newState;
  
 if (showType == 0) {
  for (int i = 0; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, 0, 0, 0);
  }
  strip.show();  
}
if (showType == 1) {
  
  checkPos();
  
  switch(pos){
    
    case 0: 
    OldLamp = random(100,200);
    R = 250-OldLamp; G = R-40-OldLamp; B = 40-OldLamp; 
    if(G<0) G=0; if(R<0) R=0; if(B<0) B=0;
    delay(random(100,150));
    break;
    
    case 6:  R = 255; G = 0;   B = 0;    break;
    case 7:  R = 255; G = 0;   B = 51;   break;
    case 8:  R = 255; G = 0;   B = 102;  break;
    case 9:  R = 255; G = 0;   B = 153;  break;
    case 10: R = 255; G = 0;   B = 204;  break;
    case 11: R = 255; G = 0;   B = 255;  break;
    case 12: R = 204; G = 0;   B = 255;  break;
    case 13: R = 153; G = 0;   B = 255;  break;
    case 14: R = 102; G = 0;   B = 255;  break;
    case 15: R = 51;  G = 0;   B = 255;  break;
    case 16: R = 0;   G = 0;   B = 255;  break;
    case 17: R = 0;   G = 51;  B = 255;  break;
    case 18: R = 0;   G = 102; B = 255;  break;
    case 19: R = 0;   G = 153; B = 255;  break;
    case 20: R = 0;   G = 204; B = 255;  break;
    case 21: R = 0;   G = 255; B = 255;  break;
    case 22: R = 0;   G = 255; B = 204;  break;
    case 23: R = 0;   G = 255; B = 153;  break;
    case 24: R = 0;   G = 255; B = 102;  break;
    case 25: R = 0;   G = 255; B = 51;   break;
    case 26: R = 0;   G = 255; B = 0;    break;
    case 27: R = 51;  G = 255; B = 0;    break;
    case 28: R = 102; G = 255; B = 0;    break;
    case 29: R = 153; G = 255; B = 0;    break;
    case 30: R = 204; G = 255; B = 0;    break;
    case 31: R = 255; G = 255; B = 0;    break;
    case 32: R = 255; G = 204; B = 0;    break;
    case 33: R = 255; G = 153; B = 0;    break;
    case 34: R = 255; G = 102; B = 0;    break;
    case 35: R = 255; G = 51;  B = 0;    break;
    case 36: R = 255; G = 0;   B = 0;    break;
    default: R = 0;   G = 0;   B = 0;
  }
  
  for (int i = 0; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, R, G, B);
  }
  strip.show();  

} else {
  for (int i = 0; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, 0, 0, 0);
  }
  strip.show(); 
  }
}
