#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10

int main(void) {
    int chain[BRANCHES][FLOORS][ROOMS];
    int b, f, r;
    int total = 0;

    srand((unsigned int)time(NULL));

    
    for (b = 0; b < BRANCHES; b++)
        for (f = 0; f < FLOORS; f++)
            for (r = 0; r < ROOMS; r++)
                chain[b][f][r] = rand() % 2;

    
    for (b = 0; b < BRANCHES; b++) {
        int branchTotal = 0;
        for (f = 0; f < FLOORS; f++)
            for (r = 0; r < ROOMS; r++)
                branchTotal += chain[b][f][r];

        printf("Branch %d occupied rooms: %d\n", b + 1, branchTotal);
        total += branchTotal;
    }

    printf("\nTotal occupied rooms across all branches: %d\n", total);

    return 0;
}
