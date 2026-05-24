// Question: write a program to check a given number is even or odd
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("The given number is even");
    else
        printf("The given number is odd");
    return 0;
}