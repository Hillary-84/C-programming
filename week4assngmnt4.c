#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, guess, attempts = 0;

    srand((unsigned int)time(NULL));
    secret = rand() % 20 + 1;   

    printf("Guess the number between 1 and 20\n");

    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');   
            continue;
        }
        attempts++;

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else
            printf("Congratulations!\n");
    } while (guess != secret);

    printf("Total attempts: %d\n", attempts);
    return 0;
}
