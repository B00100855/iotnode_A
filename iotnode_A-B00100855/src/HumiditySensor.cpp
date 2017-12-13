#include "Sensor.h"



class HumiditySensor : public Sensor
{
    public:
        int getValue(int value){
            s = value;
            sendValue(s);
        };
        int sendValue(int value){
            return value * 0.5;
        };
    protected:
        int s;

};





