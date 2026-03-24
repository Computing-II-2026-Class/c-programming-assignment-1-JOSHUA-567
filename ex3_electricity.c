/* Name: MUGABI JOSHUA */
/* Student Number: 25/U/BIE/01394/PE */

#include <stdio.h> // Include standard input/output functions

int main(void)  // Main function: program starts here
{
    float unitsConsumed;  // Units consumed
    float costPerUnit;    // Cost per unit
    float totalBill;      // Total electricity bill

    // Ask the user for units consumed
    printf("Enter units consumed: ");
    scanf("%f", &unitsConsumed);

    // Ask the user for cost per unit
    printf("Enter cost per unit: ");
    scanf("%f", &costPerUnit);

    // Calculate total bill
    totalBill = unitsConsumed * costPerUnit;

    // Display result
    printf("Total bill: %.2f UGX\n", totalBill);

    return 0; 
    // End of program
}