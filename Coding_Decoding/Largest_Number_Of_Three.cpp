// Write a C++ program to find largest of three numbers.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter the number 1 : ";
    cin>>num1;

    cout<<"Enter the number 2 : ";
    cin>>num2;

    cout<<"Enter the number 3 : ";
    cin>>num3;

    if(num1>num2 && num1>num3)
    {
        cout<<"The largest number is : " << num1 <<endl;
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<"The largest number is : " << num2 <<endl;
    }
    else if(num3>num1 && num3>num2)
    {
        cout<<"The largest number is : " << num3 <<endl;
    }
    else
    {
        cout<<"All numbers are equal." <<endl;
    }
    return 0;
}
