#include <iostream>
#include <exception>
using namespace std;

class InvalidMarksException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid Marks! Enter marks between 0 and 100";
    }
};

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    try {
        if (marks < 0 || marks > 100) {
            throw InvalidMarksException();
        }

        cout << "Valid Marks: " << marks;
    }
    catch (const InvalidMarksException& e) {
        cout << e.what();
    }

    return 0;
}