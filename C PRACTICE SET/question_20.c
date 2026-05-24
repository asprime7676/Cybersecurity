// Question: Write a program to find all numbers between 1 and n
//(n takes from keyboard) and give number is divisible by 3 and 5
#include <stdio.h>
int main()
{
    int fn = 1;
    int sn;
    printf("Enter your range to find out The number whis is divisible by 3 and 5: ");
    scanf("%d", &sn);
    while (fn <= sn)
    {
        if (fn % 3 == 0 && fn % 5 == 0)
            printf("%d\n", fn);
        fn++;
    }
    return 0;
}