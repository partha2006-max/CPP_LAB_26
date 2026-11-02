#include <iostream>
using namespace std;
class Student{
    int rollNo;
    string name;
    float marks;
public:
    void getData();
    void displayData();
};
void Student::getData(){
    cout<<"Enter Roll Number: ";
    cin>>rollNo;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Marks: ";
    cin>>marks;
}
void Student::displayData(){
    cout<<"\nStudent Details"<<endl;
    cout<<"Roll Number: "<<rollNo<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: " <<marks<<endl;
}
int main(){
    Student s;
    s.getData();
    s.displayData();
    return 0;
}