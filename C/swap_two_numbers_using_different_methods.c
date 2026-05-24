// Create a function to swap two numbers using different methods

#include <stdio.h>
// Function declaration for swapping numbers
void line(char ch);
int swap3tv(int x, int y);
int swapw3tv1(int a, int b);
int swapuXOR(int p, int q);
// Main Function defination
int main()
{
    int sn, fn;
    line('-');
    printf("\nEnter First Number: ");
    scanf("%d", &sn);
    printf("Enter Second Number: ");
    scanf("%d", &fn);
    printf("\n");
    line('-');
    printf("\n");
    printf("sn = %d, fn = %d", sn, fn);
    printf("\n");
    line('-');
    printf("\n");
    return 0;
}
// Function defination for different methods which is use to swawp numbers
void line(char ch)
{
    int i;
    for (i = 1; i <= 100; i++)
    printf("%c", ch);
}
