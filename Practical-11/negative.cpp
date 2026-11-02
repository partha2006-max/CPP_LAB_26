#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0) {
            throw "Negative number not allowed";
        }

        cout << "Valid number: " << num;
    }
    catch (const char* msg) {
        cout << msg;
    }

    return 0;
}