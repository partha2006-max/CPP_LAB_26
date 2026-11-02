#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;

    // Open file in append mode
    ofstream fout("students.txt", ios::app);

    cout << "Enter student name: ";
    getline(cin, name);

    // Add new record
    fout << name << endl;
    fout.close();

    // Read all records
    ifstream fin("students.txt");

    cout << "\nAll Student Records:\n";

    while (getline(fin, name)) {
        cout << name << endl;
    }

    fin.close();

    return 0;
}
