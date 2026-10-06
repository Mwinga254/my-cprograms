//Author: Jesee Mwinga
//Adm No :BCS-05-0552/2026
//Description:Electricity consumption program (for loop)

#include <stdio.h>

int main() {
    int units;

    for (int i = 1; i <= 10; i++) {
        printf("Enter electricity units for Household %d: ", i);
        scanf("%d", &units);

        printf("Household %d consumed %d units.\n\n", i, units);
    }

    return 0;
}
