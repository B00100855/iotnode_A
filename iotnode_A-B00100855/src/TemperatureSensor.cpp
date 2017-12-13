#include "Sensor.h"


//Derived Class
class TemperatureSensor : public Sensor
{
    public:
        int getValue(int value){
            s = value;
            sendValue(s);
        };

    protected:
        int s;
        int sendValue(int value){
            return value * 0.1;
        };

};







