// write a program to check wheather a given number is positive or negative
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a >= 1)
        printf("%d is positive number", a);
    else
        printf("%d is negative number", a);
    return 0;
}