#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employee_id;
    string designation;
    string branch;
    float salary;
    float Gsalary;

public:
    void inputDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employee_id;

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Branch: ";
        cin >> branch;

        cout << "Enter Salary: ";
        cin >> salary;

        cout << "Enter Gross Salary: ";
        cin >> Gsalary;
    }

    void displayDetails()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Designation: " << designation << endl;
        cout << "Branch: " << branch << endl;
        cout << "Salary: " << salary << endl;
        cout << "Gross Salary: " << Gsalary << endl;
    }
};

int main()
{
    Employee e1;

    e1.inputDetails();
    e1.displayDetails();

    return 0;
}