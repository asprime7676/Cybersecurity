/*Question: Weite a program to find largest of four numbers
test data 12, 25, 52, 68*/
#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter four number one by one: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
        printf("%d is greater number", a);
    else if (b > a && b > c && b > d)
        printf("%d is greater number", b);
    else if (c > a && c > b && c > d)
        printf("%d is greater number", c);
    else
        printf("%d is greater number ", d);

    return 0;

}