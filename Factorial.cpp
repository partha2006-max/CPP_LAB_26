// Write a C++ program to find the factorial of a number.

#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout<<"Enter the number : ";
    cin>>num;

    for(int i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    cout<<"Factorial of " << num << " is : " << fact <<endl;

    return 0;
}
