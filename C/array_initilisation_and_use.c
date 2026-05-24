// Program to declartion of array and assign the element in array and print all values in array

#include<stdio.h>
int main()
{
    int i;
    int array[5] = {120, 300, 342, 509, 198};
    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}