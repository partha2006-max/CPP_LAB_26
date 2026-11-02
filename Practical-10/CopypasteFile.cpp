/* File Handling with C++ using ifstream & ofstream class object*/
/* To copy the content from existing file to new file*/

#include <iostream>
#include <fstream>
using namespace std;
// Driver Code
int main()
{
    // Creation of ifstream class object to read the file
    ifstream fin;
    string line;

    // Open existing file
    fin.open("sample.txt");

    // Creation of ofstream class object to write the file
    ofstream fout;

    // Open new file
    fout.open("newfile.txt");

    while (getline(fin, line))
    {
        fout << line << endl;
    }
    // Close the files
    fin.close();
    fout.close();

    cout << "Content copied successfully." << endl;

    return 0;
}