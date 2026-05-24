// Question: Write a progarm to convert celsius to fahrenheeit
#include <stdio.h>
int main()
{
    int c, f;
    printf("Enter the Celsius: ");
    scanf("%d", &c);
    f = (9 * c)/5 + 32;
    printf("The fahrenheit is: %d", f);
    return 0;
}
