#include <stdio.h>
int isPerfect(int n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num))
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);

    return 0;
}
int isPerfect(int n) {
    int i, sum = 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}