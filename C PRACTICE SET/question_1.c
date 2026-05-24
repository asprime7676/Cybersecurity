// Question: write a program to check weather the given number is divisible by 2,3 and 5
#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    if(b%2==0 && b%3==0 && b%5==0)
    {
        printf("the value is divisible by 2,3 and 5");
    }
    else
    {
        printf("the value is not divisible bt 2,3 and 5");
    }

    return 0;
}