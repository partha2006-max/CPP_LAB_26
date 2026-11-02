#include <iostream>
#include <string>
using namespace std;
class Employee { 
    private:
        int employee_id;
        string designation;
        string branch;
        float salary;
        float gsalary;
    public:
        void inputDetails() {
            cout << "Enter Employee ID: ";
            cin >> employee_id;
            cout << "Enter Employee Designation: ";
            getline(cin >> ws, designation);
            cout << "Enter Employee Branch: ";
            getline(cin >> ws, branch);
            cout << "Enter salary: ";
            cin >> salary;
            gsalary = salary + ((20 / 100) * salary) + ((80/ 100) * salary);
        }
        void displayDetails() const {
            cout << "\n----- Employee Details -----\n";\
            cout << "Employee ID : " << employee_id << endl;
            cout << "Designation : " << designation << endl;
            cout << "Branch : " << branch << endl;
            cout << "salary : " << salary << endl;
            cout << "Gross Salary : " << gsalary << endl;
        }
};
int main() {
    Employee s;
    s.inputDetails();
    s.displayDetails();
    return 0;
} 