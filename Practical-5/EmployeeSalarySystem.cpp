#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    double basicSalary;
    double hra;
    double da;

public:
    Employee(int i, string n, double basic, double h, double d) {
        id = i;
        name = n;
        basicSalary = basic;
        hra = h;
        da = d;
    }
    double grossSalary() {
        return basicSalary + hra + da;
    }
    void display() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << grossSalary() << endl;
    }
    ~Employee() {
        cout << "Employee object destroyed." << endl;
    }
};
int main() {
    Employee e(101, "Rahul", 30000, 5000, 3000);

    e.display();

    return 0;
}