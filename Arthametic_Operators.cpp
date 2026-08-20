// Write a C++ program to perform arithmetic operations on two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a, b, sum, sub, multi, div, mod;

    cout<<"Enter value of a : ";
    cin>>a;

    cout<<"Enter value of b : ";
    cin>>b;

    sum = a + b;
    cout<<"Sum of a & b is : " <<sum <<endl;

    sub = a - b;
    cout<<"Subastraction of a & b is : " <<sub <<endl;

    multi = a * b;
    cout<<"Multiplication of a & b is : " <<multi <<endl;

    div = a / b;
    cout<<"Division of a & b is : " <<div <<endl;

    mod = a % b;
    cout<<"Modulus of a & b is : " <<mod <<endl;

    return 0;
}