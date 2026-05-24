// Question: Write a program to count digits in given number and the number takes from user

#include <stdio.h>
int main()
{
    int a, n, count = 0;
    printf("Enter your Number: ");
    scanf("%d", &a);
    n = a;
    while (n != 0)
    {
        n = n / 10;
        count = count + 1;
    }
    printf("The Digits Are %d", count);
    return 0;
}