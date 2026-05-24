/*Question: Write a C program to check whether an alphabet is a vowel or a consonant.
 Test Data : k Expected Output :
 The alphabet is a consonant     */

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabate: ");
    scanf("%c", &ch);
    // Vowels are: a, e, i, o, u and A, E, I, O, U
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        printf("The Given Alphabate is Vowel");
    else
        printf("The Given Alphabate is Consonant");
    return 0;
}