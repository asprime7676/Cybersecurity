/*Question: Write a program in C to calculate and print the electricity bill of a given customer.
 The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to
 be paid to the customer. The charge are as follow :
 Unit                                Charge/unit
 upto 199                              @1.20
 200 and above but less than 400       @1.50
 400 and above but less than 600       @1.80
 600 and above                         @2.00
 If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-  */

#include <stdio.h>

int main()
{
    int id;
    char name[50];
    float units, amount, surcharge = 0, total;

    // Input details
    printf("Enter Customer ID: ");
    scanf("%d", &id);

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Units Consumed: ");
    scanf("%f", &units);

    // Calculate amount based on units
    if (units < 200)
        amount = units * 1.20;
    else if (units < 400)
        amount = units * 1.50;
    else if (units < 600)
        amount = units * 1.80;
    else
        amount = units * 2.00;

    // Apply surcharge if amount exceeds 400
    if (amount > 400)
        surcharge = amount * 0.15;

    total = amount + surcharge;

    // Apply minimum bill rule
    if (total < 100)
        total = 100;

    // Print bill summary
    printf("\n----- Electricity Bill -----\n");
    printf("Customer ID       : %d\n", id);
    printf("Customer Name     : %s\n", name);
    printf("Units Consumed    : %.2f\n", units);
    printf("Amount Charges    : Rs. %.2f\n", amount);
    printf("Surcharge         : Rs. %.2f\n", surcharge);
    printf("Total Amount Paid : Rs. %.2f\n", total);
    printf("----------------------------\n");

    return 0;
}
