#include <iostream>

using namespace std;

int main ()
{
    typedef struct
    {
        int num;
        int denom;
    } fraction;
    fraction frac1, frac2, resfrac;
    char slash;
    cout << "Enter first fraction: ";
    cin >> frac1.num >> slash >> frac1.denom;
    cout << "Enter second fraction: ";
    cin >> frac2.num >> slash >> frac2.denom;
    resfrac.num = frac1.num * frac2.denom + frac1.denom * frac2.num;
    resfrac.denom = frac1.denom * frac2.denom;
    cout << "Sum = " << resfrac.num << slash << resfrac.denom << endl;
    return 0;
}