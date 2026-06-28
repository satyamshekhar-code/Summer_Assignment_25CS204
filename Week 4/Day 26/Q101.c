#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNum, guess;
    int attempts = 0;

    srand(time(NULL));
    secretNum = (rand() % 100) + 1;

    printf("Welcome to the number guessing game.\n");
    printf("Guess a number between 1 and 100:\n\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNum) {
            printf("Too High! Try a smaller number.\n\n");
        } 
        else if (guess < secretNum) {
            printf("Too Low! Try a larger number.\n\n");
        } 
        else {
            printf("\nCorrect Guess!\n");
            printf("The secret number was: %d\n", secretNum);
            printf("Total attempts taken: %d\n", attempts);
            break;
        }
    }

    return 0;
}