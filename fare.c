#include <stdio.h>

// Function to calculate fare based on distance
double calculateFare(double distance) {
    const double ratePerKm = 50.0; // Fare rate in KSh per kilometer

    // Validate distance
    if (distance < 0) {
        printf("Error: Distance cannot be negative.\n");
        return -1; // Return -1 to indicate an error
    }

    return distance * ratePerKm;
}

int main() {
    double distance;

    printf("Enter distance traveled in kilometers: ");
    // Input validation: ensure numeric input
    if (scanf("%lf", &distance) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    double fare = calculateFare(distance);

    if (fare >= 0) { // Only print if no error
        printf("Total fare: KSh %.2f\n", fare);
    }

    return 0;
}