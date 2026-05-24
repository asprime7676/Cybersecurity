/*Question: write a program to accept the
height of a person in centimeters and categorize the person according to their height */
#include <stdio.h>
int main()
{
    int height;
    printf("Enter your height (cm): ");
    scanf("%d", &height);
    if (height > 0 && height < 160)
        printf("The prson is dwart");
    else if (height >= 160 && height <= 170)
        printf("The person is below average");
    else if (height >= 171 && height <= 180)
        printf("The person is avarage");
    else if (height >= 181 && height <= 190)
        printf("The person is Tall");
    else
        printf("The person is very tall");
    return 0;
}