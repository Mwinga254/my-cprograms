//Author: Jesee Mwinga
//Adm No :BCS-05-0552/2026
//Description:Number guessing program (while loop)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess;
    int attempts = 0;

    // Seed the random number generator using current time
    srand(time(0));
    // Generate a random number between 1 and 20 inclusive
    secret_number = (rand() % 20) + 1;

    while (1) {
        printf("Enter a guess (1 to 20): ");
        scanf("%d", &guess);
        attempts++; // Increment the number of attempts

        if (guess > secret_number) {
            printf("Too high!\n");
        } else if (guess < secret_number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            break; // Exit the loop when guessed correctly
        }
    }

    // Display total number of attempts
    printf("Total attempts: %d\n", attempts);
    return 0;
}
