/*Question: Write a C program that prompts the user to input a series of numbers until they input a duplicate number.
 Use a while loop to check for duplicates.       */

#include <stdio.h>

int main()
{
    int numbers[100]; // to store inputs
    int count = 0;    // how many numbers entered
    int num;
    int duplicate_found = 0;

    while (!duplicate_found)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        // check if number is duplicate
        int i = 0;
        while (i < count)
        {
            if (numbers[i] == num)
            {
                duplicate_found = 1;
                break;
            }
            i++;
        }

        numbers[count] = num; // store number
        count++;
    }

    printf("Duplicate number detected: %d\n", num);

    return 0;
}
