#include <stdio.h>

int main() {
    int choice, engraved_units;
    float total_cost;

    printf("Select the type of ring:\n");
    printf("1. Gold Plated Ring\n");
    printf("2. Solid Gold Ring\n");
    printf("3. Silver Plated Ring\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    printf("Enter the number of engraved units: ");
    scanf("%d", &engraved_units);

    if (choice == 1) {
        // Gold plated ring
        total_cost = 500 + (engraved_units * 70.30);
        printf("The total cost of the Gold Plated Ring with %d engraved units is Rs. %.2f\n", engraved_units, total_cost);
    } else if (choice == 2) {
        // Solid gold ring
        total_cost = 1000 + (engraved_units * 10.40);
        printf("The total cost of the Solid Gold Ring with %d engraved units is Rs. %.2f\n", engraved_units, total_cost);
    } else if (choice == 3) {
        // Silver plated ring
        total_cost = 300 + (engraved_units * 5.10);
        printf("The total cost of the Silver Plated Ring with %d engraved units is Rs. %.2f\n", engraved_units, total_cost);
    } else {
        printf("Invalid choice! Please select a valid ring type (1/2/3).\n");
    }

    return 0;
}
