#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("The formula is (a + b)(a - b) = a^2 - b^2\n: ");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    // (a + b)(a - b) = a^2 - b^2
    printf("The value is %d", (a * a) - (b * b));
}