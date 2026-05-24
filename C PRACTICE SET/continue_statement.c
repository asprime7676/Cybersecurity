#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("%d", i);
        continue; // if continue statement are use first then increment then the loop become infinite
        i++;
    }
    return 0;
}