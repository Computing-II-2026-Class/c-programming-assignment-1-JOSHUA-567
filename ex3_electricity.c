/* Name:MUGABI JOSHUA */
/* Student Number: 25/U/BIE/01394/PE */

#include <stdio.h>

int main() {
    float unitsConsumed;  // Number of electricity units consumed
    float costPerUnit;    // Cost per unit of electricity
    float totalBill;      // Total electricity bill

    // Ask the user for units consumed
    printf("Enter units consumed: ");
    scanf("%f", &unitsConsumed);

    // Ask the user for cost per unit
    printf("Enter cost per unit: ");
    scanf("%f", &costPerUnit);

    // Calculate total electricity bill
    totalBill = unitsConsumed * costPerUnit;

    // Display results in receipt-style format
    printf("\n----- ELECTRICITY BILL -----\n");
    printf("Units Consumed : %.2f\n", unitsConsumed);
    printf("Cost per Unit  : %.2f UGX\n", costPerUnit);
    printf("Total Bill     : %.2f UGX\n", totalBill);
    printf("----------------------------\n");

    return 0; // End of program
}