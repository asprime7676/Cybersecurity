#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0)
        printf("the value is divisible by 3,5 and 7");

    else
        printf("the value is not divisible bt 3,5 and 7");

    return 0;
}