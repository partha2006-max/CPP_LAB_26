#include <iostream>
#include <string>
using namespace std;
class Patient {
private:
    int patientId;
    string patientName;
    int age;
    double consultationCharge;
public:
    void registerPatient() {
        cout << "Enter Patient ID: ";
        cin >> patientId;
        cout << "Enter Patient Name: ";
        cin >> patientName;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Consultation Charge: ";
        cin >> consultationCharge;
    }
    void calculateCharge() {
        cout << "Consultation Charge: ₹" << consultationCharge << endl;
    }
    void display() {
        cout << "\n----- Patient Information -----" << endl;
        cout << "Patient ID: " << patientId << endl;
        cout << "Patient Name: " << patientName << endl;
        cout << "Age: " << age << endl;
        cout << "Consultation Charge: ₹" << consultationCharge << endl;
    }
};
int main() {
    Patient p;
    p.registerPatient();
    p.calculateCharge();
    p.display();
    return 0;
}