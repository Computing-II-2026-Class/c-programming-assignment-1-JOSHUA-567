/* Name: MUGABI JOSHIA */
/* Student Number: 25/U/BIE/01394/PE */

#include <stdio.h>

int main() {
    float distanceTravelled; // Distance travelled in kilometers
    float fuelUsed;          // Fuel used in litres
    float fuelEfficiency;    // Fuel efficiency in km/litre

    // Ask the user for distance travelled
    printf("Enter distance travelled (km): ");
    scanf("%f", &distanceTravelled);

    // Ask the user for fuel used
    printf("Enter fuel used (litres): ");
    scanf("%f", &fuelUsed);

    // Calculate fuel efficiency
    fuelEfficiency = distanceTravelled / fuelUsed;

    // Display results in report-style format
    printf("\n----- FUEL EFFICIENCY REPORT -----\n");
    printf("Distance Travelled: %.2f km\n", distanceTravelled);
    printf("Fuel Used         : %.2f litres\n", fuelUsed);
    printf("Fuel Efficiency   : %.2f km/litre\n", fuelEfficiency);
    printf("----------------------------------\n");

    return 0;
     // End of program
}