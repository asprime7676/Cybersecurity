// Question: Write a program to make a calculator and take user choice to do a task and make teir function

#include <stdio.h>
// function declaration
void line(char ch);
int sum(int q, int w);
int substraction(int e, int r);
int multiplication(int y, int t);
float division(float u, float i);
int remain(int o, int p);
// making a program
int main()
{
    int sn, fn, choice, rs;
    float rsd;
    line('-');
    printf("\n\t\t\t\t\t  Calculator\n");
    line('-');
    printf("\n1. Addition (+)\n");
    printf("2. Substraction (-)\n");
    printf("3. Multiplication (x)\n");
    printf("4. Division (/)\n");
    printf("5. Remainder (R)\n");
    printf("6. Exit (^X)\n");
    line('!');
    printf("\nEnter First Number: ");
    scanf("%d", &sn);
    printf("Enter Second Number: ");
    scanf("%d", &fn);
    line('-');
    printf("\nEnter your Choice: ");
    scanf("%d", &choice);
    line('-');
    switch (choice)
    {
    case 1:
        rs = sum(sn, fn);
        printf("\nSum = %d", rs);
        break;
    case 2:
        rs = substraction(sn, fn);
        printf("\nSubstraction = %d", rs);
        break;
    case 3:
        rs = multiplication(sn, fn);
        printf("\nMultiplication = %d", rs);
        break;
    case 4:
        rsd = division(sn, fn);
        printf("\nDivision = %.5f", rsd);
        break;
    case 5:
        rs = remain(sn, fn);
        printf("\nRemainder = %d", rs);
        break;
    case 6:
        printf("\nExiting the calculator Thank You\n");
        line('^');
        break;
    }
    return 0;
}

// function defination
void line(char ch)
{
    int i;
    for (i = 1; i <= 100; i++)
        printf("%c", ch);
}
int sum(int q, int w)
{
    int add;
    add = q + w;
    return add;
}
int substraction(int e, int r)
{
    int sub;
    sub = e - r;
    return sub;
}
int multiplication(int t, int y)
{
    int mul;
    mul = t * y;
    return mul;
}
float division(float u, float i)
{
    float div;
    div = u / i;
    return div;
}
int remain(int o, int p)
{
    int rem;
    rem = o % p;
    return rem;
}