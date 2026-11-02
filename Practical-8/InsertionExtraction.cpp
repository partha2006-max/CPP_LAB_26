#include <iostream>
using namespace std;
class Student {
    int rollNo;
    string name;
public:
    friend istream& operator>>(istream& in, Student& s) {
        cout << "Enter Roll No: ";
        in >> s.rollNo;

        cout << "Enter Name: ";
        in >> s.name;

        return in;
    }
    friend ostream& operator<<(ostream& out, Student& s) {
        out << "\nStudent Details:" << endl;
        out << "Roll No: " << s.rollNo << endl;
        out << "Name: " << s.name << endl;

        return out;
    }
};
int main() {
    Student s;
    cin >> s;
    cout << s;
    return 0;
}