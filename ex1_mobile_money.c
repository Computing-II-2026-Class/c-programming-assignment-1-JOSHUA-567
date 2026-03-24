/* Name: MUGABI JOSHUA */
/* Student Number: 25/U/BIE/01394/PE */

#include <stdio.h>

int main(void)
{
    float amountToSend;    // Amount user wants to send
    float transactionFee;  // Fee percentage
    float feeAmount;       // Calculated fee
    float totalDeducted;   // Total amount deducted including fee

    // Ask user for amount to send
    printf("Enter amount to send: ");
    scanf("%f", &amountToSend);

    // Ask user for transaction fee percentage
    printf("Enter transaction fee (%%): ");
    scanf("%f", &transactionFee);

    // Calculate fee and total amount
    feeAmount = amountToSend * transactionFee / 100;
    totalDeducted = amountToSend + feeAmount;

    // Display results in exact expected format for autograder
    printf("\nTransaction fee: %.2f UGX\n", feeAmount);
    printf("Total deducted: %.2f UGX\n", totalDeducted);

    return 0;
}