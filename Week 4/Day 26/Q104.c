#include <stdio.h>

int main() {
    char answer;
    int score = 0;

    printf("Welcome to the Quiz Application\n\n");

    printf("Q1: Which data type is used to store text in C?\n");
    printf("A. int\nB. float\nC. char\nD. double\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong!\n\n");
    }

    printf("Q2: What is the starting index of an array in C?\n");
    printf("A. 1\nB. 0\nC. -1\nD. 2\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong!\n\n");
    }

    printf("Q3: Which function is used to print output?\n");
    printf("A. scanf\nB. getch\nC. main\nD. printf\n");
    printf("Your Answer: ");
    scanf(" %c", &answer);
    
    if (answer == 'D' || answer == 'd') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong!\n\n");
    }

    printf("Quiz Finished!\n");
    printf("Your final score is: %d out of 3\n", score);

    return 0;
}