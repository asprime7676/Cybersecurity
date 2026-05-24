// Question: Write a program to print number from 0 to 20 using while loop
#include <stdio.h>
int main()
{
    int count = 0;
    while (count <= 20)
    {
        printf("%d\n", count);
        count = count + 1;
    }
    return 0;
}