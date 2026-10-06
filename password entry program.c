//Author: Jesee Mwinga
//Adm No :BCS-05-0552/2026
//Description:password entry program (Do while loop)

#include <stdio.h>

int main() {
    int password;

    // Keep asking for password until the correct one  is entered (1234)
    do {
        printf("Enter password: ");
        scanf("%d", &password);
    } while (password != 1234);

    printf("Access Granted\n");
    return 0;
}
