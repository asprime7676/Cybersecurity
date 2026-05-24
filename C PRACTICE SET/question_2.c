// Question: write a program to check weather the given number is divisible by 3,5 and 7
#include <stdio.h>
int main()
{
    int c;
    scanf("%d", &c);
    if (c % 3 == 0 || c % 5 == 0 || c % 7 == 0)

        printf("the value is divisible by 3,5 and 7");

    else

        printf("the value is not divisible bt 3,5 and 7");

    return 0;
}