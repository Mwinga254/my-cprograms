//Author:Jesee Mwinga
//Adm No :BCS-05-0552/2026
//Description:ATM withdrawal program (while loop)


#include <stdio.h>

int main() {
    float balance, withdrawal;

    // Ask the user for their starting balance
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    // Keep withdrawing while balance is greater than 0
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);
        
        // Subtract withdrawal from balance

        balance -= withdrawal; 
        printf("Remaining balance: %.2f\n", balance);
    }

    return 0;
}
