// Question: Write a program to take four number from user and tell them which is the largest number
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter The Four Numbers: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
        printf("%d is the largest Number", a);
    else if (b > a && b > c && b > d)
        printf("%d is the largest Number", b);
    else if (c > a && c > b && c > d)
        printf("%d is the largest Number", c);
    else
        printf("%d is the largest Number", d);

    return 0;
}
