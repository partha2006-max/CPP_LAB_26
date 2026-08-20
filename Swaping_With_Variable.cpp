// Write a C++ program to swap two numbers using third variable.

#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout<<"Enter the a : ";
    cin>> a;    

    cout<<"Enter the b : ";
    cin>> b ;

    cout<<"Before swapping : \n" <<"a=" << a << " b=" << b <<"\n";
    temp = a;
    a = b;
    b = temp;
    cout<<"After swapping : \n" <<"a=" << a << " b=" << b <<"\n";
    return 0;
}   