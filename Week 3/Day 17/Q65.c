#include <stdio.h>

int main() {
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, i;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements:", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements:", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    for (i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    printf("Merged array:");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}