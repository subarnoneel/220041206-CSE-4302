#include <iostream>

using namespace std;

class RationalNumber
{
    private:
        int numerator;
        int denominator;
    public:
        void assign (int num, int denom)
        {
            numerator = num;
            if (denom)
                denominator = denom;
            else
                cout << "You can not assign 0 as denominator" << endl;
        }
        float convert ()
        {
            return (float) numerator / (float) denominator;
        }
        void invert ()
        {
            if (numerator)
                swap (numerator, denominator);
            else
                cout << "You can not assign 0 as denominator" << endl << "Inversion failed" << endl;
        }
        void print ()
        {
            cout << "The Rational number is " << numerator << "/" << denominator << endl;
        }
};

int main ()
{
    RationalNumber rnum;
    rnum.assign (3, 2);
    rnum.print ();
    cout << rnum.convert () << endl;
    rnum.invert ();
    rnum.print ();
    cout << rnum.convert () << endl;
}
