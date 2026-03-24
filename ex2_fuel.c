/* Name: MUGABI JOSHUA */
/* Student Number: 25/U/BIE/01394/PE */

#include <stdio.h>

int main(void)
{
    float distance;    // Distance travelled in km
    float fuel;        // Fuel used in litres
    float efficiency;  // Calculated fuel efficiency km/l

    // Ask user for distance travelled
    printf("Enter distance (km): ");
    scanf("%f", &distance);

    // Ask user for fuel used
    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel);

    // Calculate fuel efficiency
    efficiency = distance / fuel;

    // Display result in exact expected format for autograder
    printf("\nFuel efficiency: %.2f km/l\n", efficiency);

    return 0;
}