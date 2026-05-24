// program to store student name , gather name, address, and mobile number of 10 student and print all student

#include <stdio.h>
int main()
{
    char name[10];
    char fname[10];
    char address[10];
    int mob_n[100];
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter %d student Name: ", i);
        scanf("%s", name);
    }
    for (i = 1; i <= 10; i++)
    {
        printf("Enter %d student Father Name: ", i);
        scanf("%s", fname);
    }
    for (i = 1; i <= 10; i++)
    {
        printf("Enter %d student Address: ", i);
        scanf("%s", address);
    }
    for (i = 1; i <= 10; i++)
    {
        printf("Enter %d student Mobile number: ", i);
        scanf("%d", mob_n);
    }
    for (i = 1; i <= 10; i++)
    {
        printf("%d Student Name: %s\n", i, name);
        printf("%d student Father Name: %s\n", i, fname);
        printf("%d student Address: %s\n", i, address);
        printf("%d student Mobile Number: %s\n", i, mob_n);
    }
    return 0;
}