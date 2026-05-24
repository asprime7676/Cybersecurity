#include <stdio.h>
int div(int a, int b);
int div(int sn, int fn)
{
    int division;
    division = sn / fn;
    return division;
}
int main()
{
    int sn, fn;
    int result;
    printf("Enter First NUmber: ");
    scanf("%d", &sn);
    printf("Enter Second Number: ");
    scanf("%d", &fn);
    result = div(sn, fn);
    printf("Division = %d", result);
    return 0;
}