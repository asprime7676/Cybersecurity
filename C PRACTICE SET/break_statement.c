// it is use to out from a loop or a switch case

#include <stdio.h>
int main()
{
    int h, i;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &h);
        if (h <= 20)
            break;
    }
    printf("out of loop");

    return 0;
}
