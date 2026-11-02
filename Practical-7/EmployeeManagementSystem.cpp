#include <iostream>
using namespace std;
class Employee {
protected:
    int employeeID;
    string employeeName;
    string department;
public:
    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Employee Name: ";
        cin >> employeeName;
        cout << "Enter Department: ";
        cin >> department;
    }
    void displayEmployeeDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Department: " << department << endl;
    }
};
class TeachingStaff : public Employee {
private:
    string subject;
    string qualification;
public:
    void getTeachingDetails() {
        getEmployeeDetails();
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Qualification: ";
        cin >> qualification;
    }
    void displayTeachingDetails() {
        displayEmployeeDetails();
        cout << "Subject: " << subject << endl;
        cout << "Qualification: " << qualification << endl;
    }
};
class NonTeachingStaff : public Employee {
private:
    string designation;
    int workingHours;
public:
    void getNonTeachingDetails() {
        getEmployeeDetails();
        cout << "Enter Designation: ";
        cin >> designation;
        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }
    void displayNonTeachingDetails() {
        displayEmployeeDetails();
        cout << "Designation: " << designation << endl;
        cout << "Working Hours: " << workingHours << " hours" << endl;
    }
};
int main() {
    TeachingStaff t;
    NonTeachingStaff n;
    cout << "Enter Teaching Staff Details" << endl;
    t.getTeachingDetails();
    cout << "\nTeaching Staff Details" << endl;
    t.displayTeachingDetails();
    cout << "\n-----------------------------\n" << endl;
    cout << "Enter Non-Teaching Staff Details" << endl;
    n.getNonTeachingDetails();
    cout << "\nNon-Teaching Staff Details" << endl;
    n.displayNonTeachingDetails();
    return 0;
}