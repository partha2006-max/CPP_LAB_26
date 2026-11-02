// Write a C++ Program to print first 'n' natural numbers.

#include <iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter a number to print how many first n numbers are want you : ";
    cin>>n;

    int i=1;
    
    cout<<"The first " <<n <<" Natural numbers are :" <<endl;

    while(i<=n)
    {
        cout<<i <<endl;
        i++;
    }
    cout<<endl;

    return 0;
}