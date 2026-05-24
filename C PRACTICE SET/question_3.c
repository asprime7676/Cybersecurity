// Question: Write a program to find the size of data types
#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    unsigned int e;
    long f;
    long long int g;
    short h;

    printf("The size of int data type is %d\n", sizeof a);
    printf("The size of float data type is %d\n", sizeof b);
    printf("The size of char data type is %d\n", sizeof c);
    printf("The size of double data type is %d\n", sizeof d);
    printf("The size of unsigned int data type is %d\n", sizeof e);
    printf("The size of long data type is %d\n", sizeof f);
    printf("The size of long long int data type is %d\n", sizeof g);
    printf("The size of short data type is %d\n", sizeof h);


    return 0;
}