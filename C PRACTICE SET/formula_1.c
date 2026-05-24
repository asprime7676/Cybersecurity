#include <stdio.h>
int main()
{
    int a;
    int b;
    prinf("The formula is (a^2 + b^2) = a^2 + b^2 + 2ab: \n ");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    // (a^2 + b^2) = a^2 + b^2 + 2ab
    printf("The value is %d", (a * a) + (b * b) + (2 * a * b));
    return 0;
}