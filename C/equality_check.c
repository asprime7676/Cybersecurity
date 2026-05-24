// Question: Write a c program to accept two integers and check weather they are equal or not
#include <stdio.h>
int main()
{
    int sn, fn;
    printf("Enter first number: ");
    scanf("%d", &sn);
    printf("Enter second number: ");
    scanf("%d", &fn);
    if (sn == fn)
        printf("Both numbers are equal");
    else
        printf("Not equal");
    return 0;
}