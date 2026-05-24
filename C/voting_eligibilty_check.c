// Question: write a program to read the age of candidate and determine whether he/she is eligible cast
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("You are eligible for casting");
    else
        printf("You are not eligible for casting");
    return 0;
}