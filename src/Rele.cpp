#include "Rele.h"

void Rele::powerOff() {
    digitalWrite(pin, LOW);
    state = LOW;
}

void Rele::powerOn() {
    digitalWrite(pin, HIGH);
    state = HIGH;
}