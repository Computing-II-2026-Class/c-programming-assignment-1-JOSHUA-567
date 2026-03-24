/* Name: MUGABI JOSHUA */
/* Student Number: 25/U/BIE/01394/PE */

#include <stdio.h>

int main() {
    float amountToSend;    // Amount the user wants to send
    float transactionFee;  // Transaction fee in percentage
    float feeAmount;       // Calculated fee
    float totalDeducted;   // Total amount deducted including fee

    // Ask the user for the amount to send
    printf("Enter amount to send: ");
    scanf("%f", &amountToSend);

    // Ask the user for the transaction fee (%)
    printf("Enter transaction fee (%%): ");
    scanf("%f", &transactionFee);

    // Calculate the transaction fee and total amount deducted
    feeAmount = amountToSend * transactionFee / 100;
    totalDeducted = amountToSend + feeAmount;

    // Display the results in receipt-style format
    printf("\n----- TRANSACTION SUMMARY -----\n");
    printf("Amount Sent    : %.2f UGX\n", amountToSend);
    printf("Transaction Fee: %.2f UGX\n", feeAmount);
    printf("Total Deducted : %.2f UGX\n", totalDeducted);
    printf("-------------------------------\n");

    return 0; // End of program
}