#include <iostream>

using namespace std;

class Counter
{
    private:
        int count = 0;
        int incrementStep;
    public:
        void setIncrementStep (int value)
        {
            incrementStep = value;
        }
        int getCount ()
        {
            return count;
        }
        void increment ()
        {
            count += incrementStep;
        }
        void resetCount ()
        {
            count = 0;
        }
};

int main ()
{
    Counter counter;
    counter.setIncrementStep (5);
    cout << counter.getCount() << endl;
    counter.increment();
    cout << counter.getCount() << endl;
    counter.resetCount();
    cout << counter.getCount() << endl;
}
