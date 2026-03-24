/* Name: MUGABI JOSHUA */
/* Student Number: 25/U/BIE/01394/PE */

#include <stdio.h> // Include standard input/output functions

int main(void)  // Main function: program starts here
{
    float amountToSend;    // Amount the user wants to send
    float transactionFee;  // Transaction fee in percentage
    float feeAmount;       // Calculated fee
    float totalDeducted;   // Total amount deducted including fee

    // Ask the user for the amount to send
    printf("Enter amount to send: ");
    scanf("%f", &amountToSend);

    // Ask the user for the transaction fee in percentage
    printf("Enter transaction fee (%%): ");
    scanf("%f", &transactionFee);

    // Calculate the fee and total amount
    feeAmount = (amountToSend * transactionFee) / 100;
    totalDeducted = amountToSend + feeAmount;

    // Display results
    printf("Transaction fee: %.2f UGX\n", feeAmount);
    printf("Total deducted: %.2f UGX\n", totalDeducted);

    return 0; 
    // End of program
}