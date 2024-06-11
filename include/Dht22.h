#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#ifndef DHT22_H
#define DHT22_H

class Dht22 {
    
    private:
        DHT dht22_;

    public:

        Dht22(const int& pin) : dht22_(pin, DHT22) {};

        void begin();
        float getHumidity();
        float getTemperature(); 
      
};

#endif // DHT22_H