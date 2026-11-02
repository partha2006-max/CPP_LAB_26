#include <iostream>
using namespace std;
class Employee {
public:
    virtual void calculateBonus() {
        cout << "Employee bonus" << endl;
    }
};
class Manager : public Employee {
public:
    void calculateBonus() {
        cout << "Manager Bonus = Rs. 20000" << endl;
    }
};
class Developer : public Employee {
public:
    void calculateBonus() {
        cout << "Developer Bonus = Rs. 10000" << endl;
    }
};
int main() {
    Manager m;
    Developer d;
    Employee *e;
    e = &m;
    e->calculateBonus();
    e = &d;
    e->calculateBonus();
    return 0;
}