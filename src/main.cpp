#include <Arduino.h>
#include "Rele.h"

Rele rele(7);

void setup() {
}

void loop() {
  rele.powerOn();
}
