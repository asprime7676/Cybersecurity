// Question: Create 5 function of addition, substraction, multiplication, and
//           division to calculate the value one by one

#include <stdio.h>
// function declaration part
void sline(char ch);
void dline();
int add(int a, int b);
int sub(int x, int y);
int multi(int s, int k);
float div(float r, float p);
int remen(int o, int i);
// it is main function of c program
int main()
{
    int g, m, addt, subs, multip, remain, square1, square2, cube1, cube2;
    float divisi;
    sline('%');
    printf("\t\t\t\t\t  calculator \n");
    sline('$');
    printf("Enter First number: ");  // g and m are the Actual Arguement
    scanf("%d", &g);
    sline('-');
    printf("Enter Second number: ");
    scanf("%d", &m);
    sline('-');
    addt = add(g, m);              // addt, sub, multi, div, remen, line are function call
    printf("1.Addition = %d\n", addt);  // printf and scanf are also function call
    subs = sub(g, m);
    printf("2.Substraction = %d\n", subs);
    multip = multi(g, m);
    printf("3.Multiplication = %d\n", multip);
    divisi = div(g, m);
    printf("4.Division = %.3f\n", divisi);
    remain = remen(g, m);
    printf("5.Remainder = %d\n", remain);
    square1 = g * g;
    printf("Square of the first number is: %d\n", square1);
    square2 = m * m;
    printf("Square of the second number is: %d", aquare2);
    cube1 = m * m * m;
    printf("Cube of the first number is: %d", cube1);
    cube2 = g * g * g;
    printf("Cube of the second number is: %d", cube2);
    sline('*');
    printf("Now Calculation is Completed\n");
    sline('!');
}
// function defination part means how a function perfrom a task
void sline(char ch)
{
    int i;
   for(i=1;i<=100;i++)
    {
        printf("%c",ch);
    }
    printf("\n");
}
int add(int a, int b)
{
    int addition;
    addition = a + b;     // a, b, x, y, s, k, r, p, o and i are formal parameters
    return addition;
}
int sub(int x, int y)
{
    int substraction;
    substraction = x - y;
    return substraction;
}
int multi(int s, int k)
{
    int multiplication;
    multiplication = s * k;
    return multiplication;
}
float div(float r, float p)
{
    float division;
    division = r / p;
    return division;
}
int remen(int o, int i)
{
    int remainder;
    remainder = o % i;
    return remainder;
}