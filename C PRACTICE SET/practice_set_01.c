// Question: Write a C program to calculate area of rectangle input tacks from user
#include <stdio.h>
int main()
{
    int length;
    int breadth;
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    printf("the area of the rectanle is %d", length * breadth);
    return 0;
}