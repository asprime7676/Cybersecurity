/*Question: Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.   */

#include <stdio.h>
int main()
{
    int a1 = 1, b1 = 10;
    while (a1 <= 10)
    {
        printf("%d\n", a1);
        a1++;
        // ++ are use for increment means one add to the previous number
    }
    while (b1 >= 1)
    {
        printf("%d\n", b1);
        b1--;
        // -- are use for decrement means one substrsct to the previous number
        //NOTE: if you are not use increment or decrement then the loops run infinite times
    }
    return 0;
}