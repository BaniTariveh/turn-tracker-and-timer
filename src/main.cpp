#include <Arduino.h>

// Next turn
#define PIN_NT 4
// Warning light
#define PIN_WLIGHT 5
// Overtime light
#define PIN_OTLIGHT 6

// put function declarations here:


void setup() {
  pinMode(PIN_NT, INPUT_PULLUP);
  pinMode(PIN_WLIGHT, OUTPUT);
  pinMode(PIN_OTLIGHT, OUTPUT);

}

void loop() {
  // 
  
}

// put function definitions here:
