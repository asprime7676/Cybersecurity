/*Question: `write a program to caluculate simple interest 
for a set of value representing principal number of years and rate of interest */
#include<stdio.h>
int main()
{
    int a , b , c , e;
    printf("Enter Your Amount: ");
    scanf("%d", &a);
    printf("Enter your percentage per year: ");
    scanf("%d", &b);
    printf("Enter time: ");
    scanf("%d", &c);
    e = (a * b * c)/100;
    printf("Your SI is %d", e);
    return 0;

}