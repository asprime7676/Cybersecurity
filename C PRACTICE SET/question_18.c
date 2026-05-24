// Question: Write a program to print even number between 1 to 50 and odd number also
#include <stdio.h>
int main()
{
    int even = 2;
    int odd = 1;
    while (even <= 50)
    {
        printf("The even number are: ");
        printf("%d\n", even);
        even = even + 2;
    }
    while (odd <= 50)
    {
        printf("The odd number are: ");
        printf("%d\n", odd);
        odd = odd + 2;
    }
    return 0;
}