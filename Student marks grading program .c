//Author: Jesee Mwinga
//Adm No :BCS-05-0552/2026
//Description:Student marks grading program (do while loop)

#include <stdio.h>

int main() {
    int mark;
    char choice;

    do {
        do {
            printf("Enter student mark (0-100): ");
            scanf("%d", &mark);

            if (mark < 0 || mark > 100) {
                printf("Invalid mark! Please enter a value between 0 and 100.\n");
            }
        } while (mark < 0 || mark > 100);

        printf("Mark: %d -> Grade: ", mark);
        if (mark >= 80) {
            printf("A\n");
        } else if (mark >= 70) {
            printf("B\n");
        } else if (mark >= 60) {
            printf("C\n");
        } else if (mark >= 50) {
            printf("D\n");
        } else {
            printf("F\n");
        }

        printf("\nDo you want to enter another student's mark? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program exited.\n");
    return 0;
}
