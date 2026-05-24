/*Question: write a program to print numbers from 0 to 10 and 10 to 0 using while loop   */

#include <stdio.h>
int main()
{
    int fn = 0;
    while (fn <= 10)
    {
        printf("%d\n", fn);
        fn++;
    }
    fn = 10;
    while (fn >= 0)
    {
        printf("%d\n", fn);
        fn--;
    }
    return 0;
}