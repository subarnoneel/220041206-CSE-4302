#include <iostream>

using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

int main ()
{
    etype search;
    char firstLetter;
    cout << "Enter employee type (first letter only): ";
    cin >> firstLetter;
    switch (firstLetter)
    {
        case 'l':
            search = laborer;
            break;
        case 's':
            search = secretary;
            break;
        case 'm':
            search = manager;
            break;
        case 'a':
            search = accountant;
            break;
        case 'e':
            search = executive;
            break;
        case 'r':
            search = researcher;
            break;
        default:
            cout << "Input is not valid" << endl;
            break;
    }
    cout << "Employee type is ";
    switch (search)
    {
        case 0:
            cout << "laborer" << endl;
            break;
        case 1:
            cout << "secretary" << endl;
            break;
        case 2:
            cout << "manager" << endl;
            break;
        case 3:
            cout << "accountant" << endl;
            break;
        case 4:
            cout << "executive" << endl;
            break;
        case 5:
            cout << "researcher" << endl;
            break;
        default:
            cout << "not valid" << endl;
            break;
    }
    return 0;
}