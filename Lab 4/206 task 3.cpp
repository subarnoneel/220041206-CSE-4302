#include <iostream>

using namespace std;

class EmployeeData
{
private:
    char EmpName[50];
    int ID;
    int Age;
    float Salary;
    string Status;
    string getStatus ()
    {
        if (Age <= 25)
        {
            if (Salary <= 20000)
                Status = "Low";
            else
                Status = "Moderate";
        }
        else
        {
            if (Salary <= 21000)
                Status = "Low";
            else if (Salary > 21000 && Salary <= 60000)
                Status = "Moderate";
            else
                Status = "High";
        }
        return Status;
    }
public:
    void FeedInfo ()
    {
        cout << "Enter employee name: ";
        scanf ("%[^\n]", &EmpName);
        cout << "Enter employee age: ";
        cin >> Age;
        cout << "Enter employee ID: ";
        cin >> ID;
        cout << "Enter employee salary: ";
        cin >> Salary;
        cout << endl;
    }
    void ShowInfo ()
    {
        cout << "Employee Name: " << EmpName << endl;
        cout << "Employee Age: " << Age << endl;
        cout << "Employee ID: " << ID << endl;
        cout << "Employee Salary: " << Salary << endl;
        cout << "Employee Status: " << getStatus() << " Salaried Person" << endl;
    }
};

int main ()
{
    EmployeeData ED;
    ED.FeedInfo();
    ED.ShowInfo();
}
