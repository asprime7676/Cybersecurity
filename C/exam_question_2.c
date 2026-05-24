#include<string.h>
void main()
{
    int a, *b = &a. **c = &b;
    a = 5;
    **c = 15;
    *b = **c;
    printf("A = %d, B = %d", a, *b);
}

/* output ---> A = 15 and B = 15 */