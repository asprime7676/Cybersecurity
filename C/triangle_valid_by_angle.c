/*Question: Write a C program to check whether a triangle can be formed with the given values for the angles.
 Test Data : 40 55 65
 Expected Output : The triangle is not valid  */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter The angle of Triangles: \n");
    scanf("%d%d%d", &a, &b, &c);
    // A valid is triangle is identify by their angles if the sum of 3 angles inside of triangle is 180 then it is valid triangle
    if (a > 0 && b > 0 && c > 0 && a + b + c == 180)
        printf("This is a valid traingle");
    else
        printf("This is NOT valid Triangle");
    return 0;
}