#include <iostream>
using namespace std;

class Calculator {
public:

    // Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Add two floating-point numbers
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << "Addition of two integers: "
         << c.add(10, 20) << endl;

    cout << "Addition of three integers: "
         << c.add(10, 20, 30) << endl;

    cout << "Addition of two floating numbers: "
         << c.add(10.5f, 20.5f) << endl;

    return 0;
}