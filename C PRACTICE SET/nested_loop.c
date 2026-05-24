// nested loop are the loop where one loop beside into another loop

#include <stdio.h>
int main()
{
    int sn, fn;
    for (sn = 1; sn <= 5; sn++)
    {
        for (fn = 1; fn <= 5; fn++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}