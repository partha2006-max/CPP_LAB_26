#include <iostream>
#include <string>
using namespace std;
class MobileRecharge {
private:
    string mobileNumber;
    double balance;
public:
    void getDetails() {
        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;
        cout << "Enter Initial Balance: ₹";
        cin >> balance;
    }
    void recharge(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Recharge Successful: ₹" << amount << endl;
        }else cout << "Invalid recharge amount!" << endl;
        
    }
    void deductBalance(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount Deducted: ₹" << amount << endl;
        } else cout << "Insufficient balance!" << endl;
        
    }
    void display() {
        cout << "\n----- Mobile Account Details -----" << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Current Balance: ₹" << balance << endl;
    }
};
int main() {
    MobileRecharge m;
    m.getDetails();
    m.display();
    m.recharge(500);
    m.deductBalance(200);
    m.display();
    return 0;
}