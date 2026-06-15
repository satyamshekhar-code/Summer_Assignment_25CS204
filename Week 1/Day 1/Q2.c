#include <stdio.h>

int main() {
    int num, rows;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the number of rows (default 10): ");
    scanf("%d", &rows);

    printf("\n--- Multiplication Table of %d ---\n\n", num);

    for (int i = 1; i <= rows; i++) {
        printf("%d x %2d = %d\n", num, i, num * i);
    }

    return 0;
}