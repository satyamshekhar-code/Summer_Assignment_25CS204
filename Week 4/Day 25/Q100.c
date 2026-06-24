#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[20][50], temp[50];
    int i = 0, j = 0, k = 0, wordCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            words[wordCount][j++] = str[i];
        } else if (j > 0) {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        }
        i++;
    }
    if (j > 0) {
        words[wordCount][j] = '\0';
        wordCount++;
    }

    for (i = 0; i < wordCount - 1; i++) {
        for (k = 0; k < wordCount - i - 1; k++) {
            if (strlen(words[k]) > strlen(words[k + 1])) {
                strcpy(temp, words[k]);
                strcpy(words[k], words[k + 1]);
                strcpy(words[k + 1], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (i = 0; i < wordCount; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}