// Write a C++ program to swap two numbers without using third variable.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the a : ";
    cin>> a;    

    cout<<"Enter the b : ";
    cin>> b ;

    cout<<"Before swapping : \n" <<"a=" << a << " b=" << b <<"\n";
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After swapping : \n" <<"a=" << a << " b=" << b <<"\n";
    return 0;
}   