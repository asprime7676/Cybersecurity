/*Question: Write a program in C to read any Month Number in integer and display the number of days for this month.
 Test Data : 7
 Expected Output : Month have 31 days     */

#include <stdio.h>

int main()
{
    int month, year, days;

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31; // in this month days are same 
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;

    case 2:
        // Check leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            days = 29; // Leap year
        }
        else
        {
            days = 28;
        }
        break;

    default:
        printf("Invalid month number!\n");
        return 0;
    }

    printf("Year %d, Month %d have %d days.\n", year, month, days);

    return 0;
}
