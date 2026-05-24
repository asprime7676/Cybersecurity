/*Question: Write a C program to calculate profit and loss on a transaction.
 Test Data : 500 700 Expected
 Output : You can booked your profit amount : 200   */
#include <stdio.h>
int main()
{
    int sn, fn, p, q;
    // profit = selling price - cost price similarly loss = cost price - selling price
    printf("Enter your cost Price: ");
    scanf("%d", &sn);
    printf("Enter your Selling Price: ");
    scanf("%d", &fn);
    if (p = fn - sn)
        printf("Your Profit is %d", p);
    else if (q = sn - fn)
        printf("Your Loss is %d", q);
    return 0;
}