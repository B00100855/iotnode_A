
class DataQueue
{
    public:
        DataQueue(int i): saveData(i);
        virtual ~DataQueue();
        void saveData(int value)
        {
            if(incrementorTime <= 9)
            {
                dataQueue[incrementorTime] = value;
                return dataQueue[incrementorTime];
            }
            else if{
                incrementorTime = 0;
                dataQueue[incrementorTime] = value;
                return dataQueue[incrementorTime];
            }
            else{
                cout << "queue is full. \n";
                return;
            }
        };
        //int getValue();
    private:
        int incrementorTime=0;
        int dataQueue[10];

};





#endif // IOTDATAQUEUE_H
