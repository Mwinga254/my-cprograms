#include <stdio.h>

// Function to convert Fahrenheit to Celsius
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    // Validate input
    if (scanf("%lf", &fahrenheit) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1; // Exit with error
    }

    // Call the conversion function
    celsius = convertToCelsius(fahrenheit);

    printf("%.2f°F is equal to %.2f°C\n", fahrenheit, celsius);

    return 0;
}