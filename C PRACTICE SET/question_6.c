// Question: write a program to check weather the person can vote or not input takes from user
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("Your age is more than 18 years so you can vote\n");
    else
        printf("Your age is less than 18 years so you can not vote");
    return 0;
}