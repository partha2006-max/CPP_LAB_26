// Write a C++ program to calculate the area and perimeter of a rectangle.

#include <iostream>
using namespace std;
int main()
{
    float length, breadth, area, perimeter;
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    area = length * breadth;
    cout << "Area of the rectangle is: " << area << endl;
    
    perimeter = 2 * (length + breadth);
    cout << "Perimeter of the rectangle is: " << perimeter << endl;
    return 0;
}