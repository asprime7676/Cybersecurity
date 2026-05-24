#include<stdio.h>
int sub(int a, int b)
{
    int substraction;
    substraction = a - b;
    return substraction;
}
int main()
{
    int a, b;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    int result = sub(a, b);
    printf("Substraction = %d", result);
    return 0;
}