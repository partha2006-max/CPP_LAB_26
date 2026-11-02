#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream file("sample.txt");

    if (!file) {
        cout << "File not found!";
        return 1;
    }

    string line, word;
    int lines = 0, words = 0, characters = 0;

    while (getline(file, line)) {
        lines++;
        characters += line.length();

        stringstream ss(line);

        while (ss >> word) {
            words++;
        }
    }

    file.close();

    cout << "Lines: " << lines << endl;
    cout << "Words: " << words << endl;
    cout << "Characters: " << characters << endl;

    return 0;
}
