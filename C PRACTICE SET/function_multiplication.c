#include <stdio.h>
int mul(int x, int y);
int mul(int a, int b)
{
    int multiply;
    multiply = a * b;
    return multiply;
}
int main()
{
    int a, b;
    int result;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    result = mul(a, b);
    printf("Multiply = %d", result);
    return 0;
}