/*Question: Write a C program to read any day number in integer and display the day name in word format. 
 Test Data : 4 
 Expected Output : Thursday   */
 
#include <stdio.h>
int main()
{
    int d;
    printf("Enter the number: ");
    scanf("%d", &d);
    if (d == 1)
        printf("Monday");
    else if (d == 2)
        printf("Tuesday");
    else if (d == 3)
        printf("Wednesday");
    else if (d == 4)
        printf("Thursday");
    else if (d == 5)
        printf("Friday");
    else if (d == 6)
        printf("Saturday");
    else if (d == 7)
        printf("Sunday");
    else
        printf("You entered wrong number please enter the number between 1 and 7");
    return 0;
}