/* Name: MUGABI JOSHUA */
/* Student Number: 25/U/BIE/01394/PE */

#include <stdio.h> // Standard Input/Output library for printf() and scanf()

int main(void)  // Main function: program execution starts here
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

    // Display results in report-style format
    printf("\n----- ELECTRICITY BILL -----\n");
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Cost per Unit : %.2f UGX\n", costPerUnit);
    printf("Total Bill    : %.2f UGX\n", totalBill);
    printf("----------------------------\n");

    return 0; // End of program
}