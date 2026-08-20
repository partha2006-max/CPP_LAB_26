// Write a C program to create an array of size 4 and perform additionof all elements.

#include <stdio.h>
int main()
{
    int arr[4], sum = 0;

    printf("Enter 4 elements of the array:");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of all elements in the array is: %d\n", sum);
    return 0;
}