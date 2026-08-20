// Write C program to display your Name, Roll Number, Class and Division.

#include<stdio.h>
int main()
{
    char name[50];
    int roll_number;
    char class[20];
    char division;

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("Enter your Roll Number: ");
    scanf("%d", &roll_number);

    printf("Enter your Class: ");
    scanf("%s", class);

    printf("Enter your Division: ");
    scanf(" %c", &division);
    
    printf("\n-----Student Details-----\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll_number);
    printf("Class: %s\n", class);
    printf("Division: %c\n", division);
    return 0;
}