// Write a C++ program to find largest of two numbers using an ifelse statement.    

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter the number 1 : ";
    cin>>num1;  

    cout<<"Enter the number 2 : ";
    cin>>num2;

    if(num1>num2)
    {
        cout<<"The largest number is : " << num1 <<endl;
    }
    else if(num2>num1)
    {
        cout<<"The largest number is : " << num2 <<endl;
    }
    else
    {
        cout<<"Both numbers are equal." <<endl;
    }
    return 0;
}