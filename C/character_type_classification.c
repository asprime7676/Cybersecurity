/*Question: Write a C program to check whether a character is an alphabet, digit or special character. 
 Test Data : @ 
 Expected Output : This is a special character.  */
 
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);
    // in case of alphabates it work same as number eg number increasing and decreasing 
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("It is an Alphabet.");
    else if (ch >= '0' && ch <= '9')
        printf("It is a Digit.");
    else
        printf("It is a Special Character.");
        // Special charecters are: / ? > < , . [ ] { } "" ; : | \ _ - ! @ # $ % ^ & * ( ) etc

    return 0;
}
