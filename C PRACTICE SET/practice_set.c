#include<stdio.h>
int main() {

   int a,b;
   printf("Enter First Number: ");
   scanf("%d", &a);
   printf("Enter Second Number: ");
   scanf("%d", &b);
   int addition = a+b;
   int substraction = a-b;
   printf("The Sum of the value is %d\n", addition);
   printf("The substraction of value is %d\n", substraction);

   return 0;
}