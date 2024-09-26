#include <iostream>
#include <math.h>

#define PI 3.1416

using namespace std;

class trigCalc
{
private:
    float curAngle;
    float getstatus ()
    {
        return curAngle;
    }
    void setStatus (float value)
    {
        curAngle = value;
    }
public:
    trigCalc ()
    float calculateSine()
    {
        return sin(curAngle);
    }
    float calculateCosine()
    {
        return cos(curAngle);
    }
    float calculateTangent()
    {
        if (curAngle == 90.0)
        {
            cout << "Value is undefined for the angle" << endl;
        }
        else
            return tan(curAngle);
    }
    float calculateArcSine()
    {
        float radian = curAngle * PI / 180;
        cout << "Radian equivalent of angle is: " << radian << endl;
        return asin(curAngle);
    }
    float calculateArcCosine()
    {
        return acos(curAngle);
    }
    float calculateArcTangent()
    {
        return atan(curAngle);
    }
    void calculateForAngle (float paramAngle)
    {
        cout << "sine of angle: " << calculateSine(paramAngle) << endl;
        cout << "cosine of angle: " << calculateCosine(paramAngle) << endl;
        cout << "tangent of angle: " << calculateTangent(paramAngle) << endl;
    }
    void clear()
    {
        curAngle = 0;
    }
    void display()
    {
        cout << "Calculator display: " << curAngle << endl;
    }
    ~trigCalc ()
    {
        cout << curAngle << endl;
        cout << "Destructor of the calculator object is called" << endl;
    }
};

int main ()
{

}
