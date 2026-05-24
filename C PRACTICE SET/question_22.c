// Question: Write a program to check the given number is prime or not prime
#include <stdio.h>
int main()
{
    int a;
    int t = 2;
    int isPrime = 1; // assume number is prime

    printf("Enter Your Number: ");
    scanf("%d", &a);

    while (t <= a / 2)
    {
        if (a % t == 0)
        {
            isPrime = 0; // number is not prime
            break;
        }
        t++;
    }

    if (a <= 1)
        isPrime = 0;

    if (isPrime == 1)
        printf("The given number is prime");
    else
        printf("The given number is not prime");

    return 0;
}
