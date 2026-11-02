// Write a program to find the largest number among three numbers using nested if else statements. 

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

    // Checking if any two numbers are equal.
    if(num1==num2 && num1!=num3)
    {
        cout<<"The num1 & num2 are equal" <<endl;
    }
    else if(num2==num3 && num2!=num1)
    {
        cout<<"The num2 & num3 are equal" <<endl;
    }
    else if(num1==num3 && num1!=num2)
    {
        cout<<"The num1 & num3 are equal" <<endl;
    }
    return 0;
}
