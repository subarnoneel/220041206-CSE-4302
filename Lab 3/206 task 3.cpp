#include <bits/stdc++.h>

using namespace std;

class Medicine
{
    private:
        char tradeName[30];
        char genericName [30];
        double unitPrice;
        double discount;
    public:
        void assignName (char name[], char genName[])
        {
            strcpy (tradeName, name);
            strcpy (genericName, genName);
        }
        void assignPrice (double price)
        {
            if (price >= 0)
                unitPrice = price;
            else
                unitPrice = 0.0;
        }
        void setDiscountPercent (double percent)
        {
            if (percent >= 0 && percent <= 30)
                discount = percent;
            else
                discount = 5.0;
        }
        double getSellingPrice (int nos = 1)
        {
            return (unitPrice * (1 - (discount / 100)) * nos);
        }
        void display ()
        {
            cout << "MRP. of " << tradeName << " (" << genericName << ") is BDT " << unitPrice << ". Current discount " << discount << ". Selling price BDT " << (unitPrice * (1 - (discount / 100))) << "." << endl;
        }
};

int main ()
{
    Medicine med;
    med.assignName ("Napa", "Paracetamol");
    med.assignPrice (1.00);
    med.setDiscountPercent (10.0);
    cout << med.getSellingPrice (5) << endl;
    med.display ();
}
