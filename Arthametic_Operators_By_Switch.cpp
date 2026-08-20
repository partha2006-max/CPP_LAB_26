// Write a C++ program to perform arithmetic operations on two numbers using switch case.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, choice;

    cout<<"Enter the number 1 : ";
    cin>>num1;

    cout<<"Enter the number 2 : ";
    cin>>num2;

    cout<<"\n Choice your option \n";

    cout<<"1. Addition \n";
    cout<<"2. subtraction \n";
    cout<<"3. Multiplication \n";
    cout<<"4. Division \n";
    cout<<"5. Modulus \n";
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"Addition of two number is : " <<num1 + num2 <<endl;
        break;

        case 2:
        cout<<"Subtraction of two numbwrs is : " <<num1 - num2 <<endl;
        break;

        case 3:
        cout<<"Mutiplication of two numbers is : " <<num1 * num2 <<endl;
        break;

        case 4:
        if (num2 != 0)
        {
            cout<<"Division of two numbers is : " <<num1 / num2 <<endl;
        }
        else
        {
            cout<<"Division by zero is not possible" <<endl;
        }
        break;

        case 5:
        if (num2 != 0)
        {
            cout<<"Modulus of two numbers is : " <<num1 % num2 <<endl;
        }
        else
        {
            cout<<"Modulus by zero is not possible" <<endl;
        }
        break;

        default:
        cout<<"Invalid Choice!" <<endl;

    }
    return 0;
}