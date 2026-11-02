#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    srand((unsigned int) time(NULL));

    for (branch = 0; branch < 3; ++branch) {
        for (floor = 0; floor < 5; ++floor) {
            for (room = 0; room < 10; ++room) {
                chain[branch][floor][room] = rand() % 2;
                totalOccupied += chain[branch][floor][room];
            }
        }
    }

    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}