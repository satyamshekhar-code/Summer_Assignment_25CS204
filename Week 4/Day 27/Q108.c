#include <stdio.h>

int main() {
    char name[50];
    int rollNum;
    int s1, s2, s3, s4, s5;
    int total;
    float percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Roll Number: ");
    scanf("%d", &rollNum);

    printf("Enter marks for 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &s1);
    printf("Subject 2: ");
    scanf("%d", &s2);
    printf("Subject 3: ");
    scanf("%d", &s3);
    printf("Subject 4: ");
    scanf("%d", &s4);
    printf("Subject 5: ");
    scanf("%d", &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5.0;

    printf("\n=== MARKSHEET ===\n");
    printf("Roll No: %d\n", rollNum);
    printf("Name: %s\n", name);
    printf("Total Marks: %d / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (s1 < 33 || s2 < 33 || s3 < 33 || s4 < 33 || s5 < 33) {
        printf("Result: FAIL\n");
    } else {
        printf("Result: PASS\n");
    }

    return 0;
}