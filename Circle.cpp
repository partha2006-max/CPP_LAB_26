// Write a C++ program to calculate the area and circumference of a circle.

#include <iostream>
using namespace std;
int main()
{
    float radius, area, circumference;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = 3.14 * radius * radius;
    cout << "Area of the circle is: " << area << endl;
    
    circumference = 2 * 3.14 * radius;
    cout << "Circumference of the circle is: " << circumference << endl;
    return 0;
}