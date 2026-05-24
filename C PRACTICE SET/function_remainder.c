#include <stdio.h>
int rem(int a, int b);
int rem(int gn, int as)
{
    int r;
    r = gn % as;
    return r;
}
int main()
{
    int gn, as;
    int result;
    printf("Enter First Number: ");
    scanf("%d", &gn);
    printf("Enter Second Number: ");
    scanf("%d", &as);
    result = rem(gn, as);
    printf("Remainder = %d", result);
    return 0;
}