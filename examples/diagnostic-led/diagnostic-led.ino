#include <Arduino.h>
#include <DiagnosticLED.h>

DiagnosticLED dl;

void setup() {
  // 22 is LED pin
  // LED is ON when 22 is LOW
  dl.begin(LED_BUILTIN, HIGH);

  // do 2 fast flashes
  // folowed by 3 slow flashes
  dl.activePattern(2,3);
}

void loop() {
  // update the status
  // needs to be called at least once per 100ms
  dl.update();

  delay(10);
}
