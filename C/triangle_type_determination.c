/*Question: Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
 Test Data : 50 50 60 
 Expected Output : This is an isosceles triangle  */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of triangle:\n");
    scanf("%d%d%d", &a, &b, &c);
    // Equilateral triangle means all side of triangle is equal to each other
    if (a == b && b == c )
        printf("It is Equilateral Triangle");
    // Isosceles triangle means two side of a triangle are equal
    else if (a == b && b == c && c == a)
        printf("It is Isosceles Triangle");
    // scalene triangle means all side of a triangle are different to each other
    else if (a != b && b != c)
        printf("It is Scalene Triangle");
    else
        printf("It is not a Triangle");
    return 0;
}