#include <iostream>

using namespace std;

int main ()
{
    int num1, num2, num3, num4, res1, res2;
    char slash;
    cout << "Enter first fraction: ";
    cin >> num1 >> slash >> num2;
    cout << "Enter second fraction: ";
    cin >> num3 >> slash >> num4;
    res1 = num1 * num4 + num2 * num3;
    res2 = num2 * num4;
    cout << "Sum = " << res1 << slash << res2 << endl;
    return 0;
}