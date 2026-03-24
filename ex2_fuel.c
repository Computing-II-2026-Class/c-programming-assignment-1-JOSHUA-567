/* Name: MUGABI JOSHUA */
/* Student Number: 25/U/BIE/01394/PE */

#include <stdio.h> // Include standard input/output functions

int main(void)  // Main function: program starts here
{
    float distanceTravelled; // Distance travelled in km
    float fuelUsed;          // Fuel used in litres
    float fuelEfficiency;    // Fuel efficiency in km/l

    // Ask the user for distance travelled
    printf("Enter distance (km): ");
    scanf("%f", &distanceTravelled);

    // Ask the user for fuel used
    printf("Enter fuel used (litres): ");
    scanf("%f", &fuelUsed);

    // Calculate fuel efficiency
    fuelEfficiency = distanceTravelled / fuelUsed;

    // Display result
    printf("Fuel efficiency: %.2f km/l\n", fuelEfficiency);

    return 0;
     // End of program
}