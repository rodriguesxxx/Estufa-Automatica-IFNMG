#include <Arduino.h>
#ifndef RELE_H
#define RELE_H

class Rele {
    private:
        int pin;
        bool state; 
    
    public:
        
        Rele(const int& pin) : pin(pin) {
            pinMode(pin, OUTPUT);
            powerOff();
        };

        void powerOn();
        void powerOff();
};

#endif