// Question: write a program to check weather a number is even or odd and input takes from user
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("The number is enen number");
    else
        printf("The number is odd number");
    return 0;
}