// Question: write a program to assign the grade of students on the basis of his percentage and percentage takes from students
#include <stdio.h>
int main()
{
    int percentage;
    printf("Enter Your Percentage: ");
    scanf("%d", &percentage);
    if (percentage >= 90)
        printf("Wow You Got Grade A");
    else if (percentage < 90 && percentage >= 80)
        printf("You Got Grade B");
    else if (percentage < 80 && percentage >= 70)
        printf("You Got graade C");
    else if (percentage < 70 && percentage >= 60)
        printf("You Got Grade D");
    else if (percentage < 60 && percentage >= 50)
        printf("You Got Grade E");
    else if (percentage < 50 && percentage >= 33)
        printf("You Got Grade F");
    else
        printf("Fail hai bhai tu ");
    return 0;
}