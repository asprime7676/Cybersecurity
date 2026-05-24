/*Question: Write a program in C which is a Menu-Driven Program to perform a simple calculation. 
 Test Data : 10 2 3 
 Expected Output : The Multiplication of 10 and 2 is: 20         */

#include <stdio.h>
int main()
{
    int sn, fn, gn, result;
    printf("\t\t Calculator \n\n");
    printf("1. Addition (+)\n");
    printf("2. Substraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (R)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &sn);
    printf("Enter First number: ");
    scanf("%d", &fn);
    printf("Enter Second number: ");
    scanf("%d", &gn);
    switch (sn)
    {
    case 1:
        printf("The sum is %d", result = fn + gn);
        break;
    case 2:
        printf("The substraction is %d", result = fn - gn);
        break;
    case 3:
        printf("The multiplication is %d", result = fn * gn);
        break;
    case 4:
        printf("The division is %d", result = fn / gn);
        break;
    case 5:
        printf("The modulus is %d", result = fn % gn);
        break;
    }
    return 0;
}