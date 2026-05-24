/*Question: Write a C program that calculates the product of numbers from 1 to 5 using a while loop   */

#include <stdio.h>
int main()
{
    int a = 1;
    int product = 1;
    while (a <= 5)
    {
        product *= a;
        a++;
    }
    printf("The product of numbers from 1 to 5 is: %d", product);
    return 0;
}