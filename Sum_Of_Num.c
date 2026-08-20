// Write a C program to perform addition of given n numbers.
#include <stdio.h>
int main() 
{
    int n, sum = 0, num;
    printf("Enter the how many numbers you want to add: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}