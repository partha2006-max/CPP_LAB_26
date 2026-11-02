// Write a C++ program to generate table of any number given by user.

#include <iostream>
using namespace std;
int main()
{
    double n;

    cout<<"Enter a number to generate multiplication table : ";
    cin>>n;

    for(int i = 1; i<=10; i++)
    {
        cout<<n <<"x" <<i <<"=" <<(n*i) <<endl;
    }
}