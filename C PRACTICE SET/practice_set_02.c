/* Question: calculate the area of a circle and modify the same program to calculate
the volume of a cyclinder given its radius and height from user */
#include <stdio.h>
int main()
{
    // area of circle is 3.14*r*r
    int radius;
    float a;
    a = 3.14;
    int height;
    printf("Enter the radius of circle and cylinder: ");
    scanf("%d", &radius);
    printf("Enter the height of cylinder: ");
    scanf("%d", &height);
    printf("the area of circle is %f\n", a * radius * radius);

    // the area of cyclinder is (2*3.14*r*h)+(2*3.14*r*r)
    
    printf("the area of cylinder is %f\n", (2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius));

    return 0;
}
