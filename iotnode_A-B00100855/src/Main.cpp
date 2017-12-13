#include "Sensor.h"
#include "DataQueue.h"

class MainController
{
    public:
        MainController(int data, Sensor* sensor)
        {
            _sensor = sensor;
            _data = new DataQueue(data);
        }

        int getDataFromSensor()
        {
             int sensorValue = _sensor.getValue();
             int dataSaved = _data.saveData(sensorValue);
             _display = new Display(dataSaved);
             return _display;
        }

    private:
        Sensor* _sensor;
        DataQueue* _data;
        Display* _display;

};


class Display
{
    public:
        Display();
        int getTempValue() //check if needed
        {
            valueToDisplay = controller.getDataFromSensor();
            return displayValue(valueToDisplay);

        }
        int getHumValue() //check if needed
        {
            valueToDisplay = controller.getDataFromSensor();;
            return displayValue(valueToDisplay);
        }

    private:
        int valueToDisplay;
        MainController controller;
        int displayValue(int value)
        {
            cout << "The value of "+ value+" is:"<< endl;
            return valueToDisplay;
        }

};

int main()
{
    Display getvalues; //create two queue objects

    cout << "Temperature of the day: ";

    getValues.getTempValue();

    cout << "Humidity of the day: ";
    getvalues.getHumValue();

    return 0;
}


