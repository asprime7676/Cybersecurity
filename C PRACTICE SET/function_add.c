// make a function of adding numbers

#include <stdio.h>
int add(int x, int y);
int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int main()
{
    int a, b;
    int result;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    result = add(a, b);
    printf("sum = %d", result);
    return 0;
}