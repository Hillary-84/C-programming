#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS 10

int main(void) {
    int occupancy[FLOORS][ROOMS];
    int i, j, occupied, vacant;

    srand((unsigned int)time(NULL));

    
    for (i = 0; i < FLOORS; i++)
        for (j = 0; j < ROOMS; j++)
            occupancy[i][j] = rand() % 2;

    printf("Room occupancy per floor\n");
    for (i = 0; i < FLOORS; i++) {
        occupied = 0;
        for (j = 0; j < ROOMS; j++)
            if (occupancy[i][j] == 1)
                occupied++;
        vacant = ROOMS - occupied;

        printf("Floor %d: Occupied = %d, Vacant = %d\n", i + 1, occupied, vacant);
    }

    return 0;
}
