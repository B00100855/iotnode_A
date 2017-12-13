#ifndef SENSOR_H
#define SENSOR_H


class Sensor
{
    public:
        Sensor();
        virtual ~Sensor();
        virtual getValue(int value);


    protected:
        int s;
        virtual sendValue(int s);
};

#endif // SENSOR_H
