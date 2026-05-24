// Question: Write a program to display a table of given number and number takes fron keyboard
#include <stdio.h>
int main()
{
    int a = 1;
    int n;
    printf("Enter a number which you want to get table: ");
    scanf("%d", &n);
    while (a <= 10)
    {
        printf("%d X %d = %d\n", n, a, (n * a));
        a++;
    }
    return 0;
}