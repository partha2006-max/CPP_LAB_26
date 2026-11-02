// Write a C++ program to find the expansion of a factorial of a number.

#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<"Factorial of " << num << " is : ";
    for(int i= num; i>=1; i--)
    {
      cout<<i;
      
      if(i!=1)
        cout<<"x";
      fact = fact * i;    
    
    }
    cout<<"=" <<fact <<endl;

    return 0;
}