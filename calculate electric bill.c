#include <stdio.h>

// Function to calculate electricity bill based on units consumed
double calculateElectricBill(int unitsConsumed) {
    double bill = 0.0;

    // Input validation
    if (unitsConsumed < 0) {
        printf("Error: Units consumed cannot be negative.\n");
        return -1.0; // Return error indicator
    }

    if (unitsConsumed <= 100) {
        bill = unitsConsumed * 10.0;
    } 
    else if (unitsConsumed <= 200) {
        bill = (100 * 10.0) + ((unitsConsumed - 100) * 15.0);
    } 
    else {
        bill = (100 * 10.0) + (100 * 15.0) + ((unitsConsumed - 200) * 20.0);
    }

    return bill;
}

int main() {
    int units;
    printf("Enter units consumed: ");

    // Validate input
    if (scanf("%d", &units) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    double totalBill = calculateElectricBill(units);

    if (totalBill >= 0) { // Only print if no error
        printf("Total electricity bill: KSh. %.2f\n", totalBill);
    }

    return 0;
}