// write a program to find weather a given year is leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("Enter your Year: ");
    scanf("%d", &year);
    if (year % 4 == 0 || year % 400 == 0)
        printf("%d is a leap year", year);
    else
        printf("%d is not leap year", year);
    return 0;
}