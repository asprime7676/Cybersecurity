/*Question: Write a program in C to accept a grade and declare the equivalent description :
 Grade Description
 E                Excellent
 V                Very Good
 G                Good
 A                Average
 F                Fail     */
#include <stdio.h>
int main()
{
    char grade;
    printf("Enter Your Grade: ");
    scanf("%c", &grade);
    if (grade == 'E')
        printf("Excellent");
    else if (grade == 'V')
        printf("Very Good");
    else if (grade == 'G')
        printf("Good");
    else if (grade == 'A')
        printf("Average");
    else if (grade == 'F')
        printf("Fail");
    else
        printf("You entered wrong grade");
    return 0;
}