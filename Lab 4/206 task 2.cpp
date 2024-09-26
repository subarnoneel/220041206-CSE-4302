#include <iostream>

using namespace std;

class BankAccount
{
private:
    int accountNum;
    char accountName[50];
    char accountType[10];
    float curBalance;
    const float minBalance = 500;
    int totalAccount = 0;
    int presentAccount = 0;
public:
    BankAccount ()
    {
        totalAccount += 1;
        presentAccount += 1;
    }
    void assignValues ()
    {
        cout << "Enter account number: ";
        cin >> accountNum;
        getchar();
        cout << "Enter account holder name: ";
        scanf ("%[^\n]", &accountName);
        cout << "Enter account type: ";
        cin >> accountType;
        curBalance = minBalance;
    }
    void showInfo ()
    {
        cout << "Your account number is: " << accountNum << endl;
        cout << "Your account holder name is: " << accountName << endl;
        cout << "Your account type is: " << accountType << endl;
    }
    void showBalance ()
    {
        cout << "Your current balance is: " << curBalance << endl;
    }
    void deposit (int value)
    {
        curBalance += value;
    }
    void withdrawal (int value)
    {
        if ((curBalance - value) < minBalance)
            cout << "Invalid amount. Insufficient balance" << endl;
        else
            curBalance -= value;
    }
    void giveInterest ()
    {
        float interest = curBalance * 0.03 * 0.90;
        curBalance += interest;
    }
    int returnTotalAccount ()
    {
        return totalAccount;
    }
    int returnPresentAccount ()
    {
        return presentAccount;
    }
    float returnBalance ()
    {
        return curBalance;
    }
    ~BankAccount ()
    {
        cout << "Account of Mr. " << accountName << " with account no. " << accountNum << " is destroyed with a balance BDT " << curBalance << endl;
        presentAccount -= 1;
    }
};

void display_stat (BankAccount acc)
{
    cout << "Total number of accounts created: " << acc.returnTotalAccount() << endl;
    cout << "Number of accounts present: " << acc.returnPresentAccount() << endl;
}

BankAccount Larger (BankAccount a1, BankAccount a2)
    {
        if (a1.returnBalance() > a2.returnBalance())
            return a1;
        else
            return a2;
    }

int main ()
{
    BankAccount bankacc;
    bankacc.assignValues ();
    bankacc.deposit(250);
    bankacc.showBalance();
    bankacc.withdrawal(200);
    bankacc.showBalance();
    bankacc.giveInterest();
    bankacc.showBalance();
    display_stat(bankacc);
}
