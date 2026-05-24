// Question: Write a program to accept a coordinate point in an (X,Y) coordinate
//           system and determine in which quadrant the coordinate point lies
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the X coordinate: ");
    scanf("%d", &x);
    printf("Enter the Y coordinate: ");
    scanf("%d", &y);
    // First quadrant have x and y have positive value
    if (x > 0 && y > 0)
        printf("The given coordinate lie in First quadrant");
    // Fourth quadrant have x negative and y positive value
    else if (x < 0 && y > 0)
        printf("The given coordinate lie in Fourth quadrant");
    // Second quadrant have x positive and y negative value 
    else if (x > 0 && y < 0)
        printf("The given coordinate lie in second quadrant");
    // Third quadrant have both x and y negative value 
    else if (x < 0 && y < 0)
        printf("The given coordinate lie in third quadrant");
    else
        printf("you entered wrong coordinate");
    return 0;
}