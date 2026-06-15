#include <FastLED.h>
#define NUM_LEDS 512
#define OE_Pin 6
#define CE_Pin 1
#define WR_Pin 2
const byte AddressPins[10] = { 7,8,9,10,11,12,13,14,15,16 }; //lsb to msb
const byte DataPins[8] = { 17,18,38,39,41,42,43,47 } //lsb to msb
CRGB leds[NUM_LEDS];
uint8_t hue = 0;

void setup() { 
  FastLED.addLeds<WS2812, 48>(leds, NUM_LEDS); 
  pinMode(OE_Pin, OUTPUT);
  pinMode(CE_Pin, OUTPUT);
  pinMode(WR_Pin, OUTPUT);
  digitalWrite(OE_Pin,1);
  digitalWrite(CE_Pin,1);
  digitalWrite(WR_Pin,1);
  for (uint8_t count = 0, count < 10 ; count++){
    pinMode(AddressPins[count], OUTPUT);
  }
  for (uint8_t count = 0, count < 8 ; count++){
    pinMode(DataPins[count], INPUT)
  }
}
uint8_t readMem(uint16_t Addr){
  for (uint8_t n = 0; n < 10 ; n++){
    digitalWrite(AddressPins[n],(Addr >> n) & 0x01);
  }
  uint8_t data = 0;
  digitalWrite(OE_Pin,0);
  digitalWrite(CE_Pin,0);
  for (int i = 0; i < 8; i++) {
    if (digitalRead(DataPins[i]) == HIGH) {
      data |= (1 << i);
  }
  digitalWrite(OE_Pin,1);
  digitalWrite(CE_Pin,1);
}
void readMemIntoRGB(){
  for (uint16_t Addr = 0; Addr < 512 ; Addr++){
    data = readMem(Addr);
    leds[Addr] = CHSV(data,255,255);
  }
}
void loop() {
  readMemIntoRGB()
}
