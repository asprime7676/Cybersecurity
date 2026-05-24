/*Question: Write a C program for reading any Month Number and displaying the Month name as a word. 
 Test Data : 4 
 Expected Output : April     */
#include <stdio.h>
int main()
{
    int m;
    printf("Enter the Month in Number: ");
    scanf("%d", &m);
    if (m == 1)
        printf("1st Month is the January ");
    else if (m == 2)
        printf("2nd Month is the Febuary");
    else if (m == 3)
        printf("3rd Month is the March");
    else if (m == 4)
        printf("4th Month is the April");
    else if (m == 5)
        printf("5th Month is the May");
    else if (m == 6)
        printf("6th Month is the June");
    else if (m == 7)
        printf("7th Month is the July");
    else if (m == 8)
        printf("8th Month is the August");
    else if (m == 9)
        printf("9th Month is the September");
    else if (m == 10)
        printf("10th Month is the October");
    else if (m == 11)
        printf("11th Month is the November");
    else if (m == 12)
        printf("12th Month is the December");
    else
        printf("You Entered Wrong Number Please Enter the Number Between 1 and 12");
    return 0;
}