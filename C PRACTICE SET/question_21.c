// Question: write a program to check all numbers is divisible by 2,4,6 and 7
#include <stdio.h>
int main()
{
    int gn = 1;
    int k;
    printf("Enter your Number: ");
    scanf("%d", &k);
    while (gn <= k)
    {
        if (gn % 2 == 0 && gn % 4 == 0 && gn % 6 == 0 && gn % 7 == 0)
            printf("%d\n", gn);
        gn++;
    }
    return 0;
}