//TODO: SALVAR NO ARMAZENAMENTO QUANTAS VEZES JÁ FORAM MOLHADAS NO DIA.
//TODO: MOLHAR A PLANTA A CADA INTERVALO DE TEMPO.
//TODO: MOLHAR EM UMIDADES ENTRE (40, 60)

#include <Arduino.h>
#include "Rele.h"
#include "Dht22.h"

#define LOW_HUMIDITY 40
#define HIGH_HUMIDITY 60

Rele rele(7);
Dht22 dht(8);


void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Programa iniciado...");
}


void loop() {
  float humidity = dht.getHumidity();
  Serial.println(humidity);
  if(humidity >= LOW_HUMIDITY && humidity <= HIGH_HUMIDITY) {
    rele.powerOn();
    Serial.println("RELE ON");
    delay(1000);
  } else {
    Serial.println("RELE OFF");
    rele.powerOff();
  }
  delay(2000);
}
