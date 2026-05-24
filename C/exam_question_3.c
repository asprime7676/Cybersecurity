#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i;
    int temp1, temp2, temp3, temp4, temp5, temp6;
    a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, i = 9;
    // now transpose of a matrix
    printf("%d %d %d\n%d %d %d\n%d %d %d\n", a, d, g, b, e, h, c, f, i);
    temp1 = b;
    b = d;
    d = temp1;
    temp2 = c;
    c = g;
    g = temp2;
    temp3 = d;
    d = b;
    b = temp3;
    temp4 = h;
    h = f;
    f = temp4;
    tepm5 = c;
    c = g;
    g = temp5;
    temp6 = h;
    h = f;
    f = temp6;
    printf("%d %d %d\n", a, b, c);
    printf("%d %d %d\n", d, e, f);
    printf("%d %d %d\n", g, h, i);
    return 0;
}
/* 
    the this then that thought themself themselves through throw tsunami tall taught toungh 
*/