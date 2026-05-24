#include <stdio.h>
int main()
{
    int a;
    int b;
    prinf("The formula is (a^2 - b^2) = a^2 + b^2 - 2ab\n: ");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    // (a^2 - b^2) = a^2 + b^2 - 2ab
    printf("The value is %d", (a * a) + (b * b) - (2 * a * b));
    /*if a = 5 and b = 2
    then (5*5) + (2*2) - (2*5*2)
           = 25+4-20
           = 29-20
           = 9 */
    return 0;
}