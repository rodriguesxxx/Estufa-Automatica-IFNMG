#include "Dht22.h"


void Dht22::begin() {
    dht22_.begin();
    delay(500);
}

float Dht22::getHumidity() {
    return dht22_.readHumidity();
}

float Dht22::getTemperature() {
    return dht22_.readTemperature();
}