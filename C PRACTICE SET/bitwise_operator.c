#include <stdio.h>

int main()
{
    int a, b;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Bitwise operations
    printf("Bitwise AND (a & b): %d\n", a & b);
    printf("Bitwise OR (a | b): %d\n", a | b);
    printf("Bitwise XOR (a ^ b): %d\n", a ^ b);

    return 0;
}
