/* Name: MUGABI JOSHUA */
/* Student Number: 25/U/BIE/01394/PE */

#include <stdio.h>

int main(void)
{
    float units;       // Units consumed
    float costPerUnit; // Cost per unit
    float totalBill;   // Total electricity bill

    // Ask user for units consumed
    printf("Enter units consumed: ");
    scanf("%f", &units);

    // Ask user for cost per unit
    printf("Enter cost per unit: ");
    scanf("%f", &costPerUnit);

    // Calculate total bill
    totalBill = units * costPerUnit;

    // Display result in exact expected format for autograder
    printf("\nTotal bill: %.2f UGX\n", totalBill);

    return 0;
}