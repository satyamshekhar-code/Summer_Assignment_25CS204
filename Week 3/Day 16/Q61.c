#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0, expectedSum, missing;

    printf("Enter the number of elements (excluding the missing number): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    expectedSum = (n + 1) * (n + 2) / 2;

    missing = expectedSum - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}