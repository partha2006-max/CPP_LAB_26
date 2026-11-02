#include <iostream>
using namespace std;

class Employee {
public:

    // Salary using Basic Salary only
    double calculateSalary(double basic) {
        return basic;
    }

    // Salary using Basic Salary and HRA
    double calculateSalary(double basic, double hra) {
        return basic + hra;
    }

    // Salary using Basic Salary, HRA and DA
    double calculateSalary(double basic, double hra, double da) {
        return basic + hra + da;
    }
};

int main() {
    Employee e;

    cout << "Salary using Basic Salary: "
         << e.calculateSalary(30000) << endl;

    cout << "Salary using Basic Salary + HRA: "
         << e.calculateSalary(30000, 5000) << endl;

    cout << "Salary using Basic Salary + HRA + DA: "
         << e.calculateSalary(30000, 5000, 3000) << endl;

    return 0;
}