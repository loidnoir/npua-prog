#include <stdio.h>

void swapWords(char word1[], char word2[]) {
    char temp[100];
    int i = 0;
    while (word1[i] != '\0') {
        temp[i] = word1[i];
        i++;
    }
    temp[i] = '\0';

    i = 0;
    while (word2[i] != '\0') {
        word1[i] = word2[i];
        i++;
    }
    word1[i] = '\0';

    i = 0;
    while (temp[i] != '\0') {
        word2[i] = temp[i];
        i++;
    }
    word2[i] = '\0';
}

int main() {
    char T[100];
    char words[100][100];

    printf("Input the string: ");
    fgets(T, sizeof(T), stdin);

    int j = 0;
    int k = 0;

    for (int i = 0; T[i] != '\0'; i++) {
        if (T[i] == ' ' || T[i] == '\n') {
            words[j][k] = '\0';
            j++;
            k = 0;
        } else {
            words[j][k] = T[i];
            k++;
        }
    }

    words[j][k] = '\0';

    for (int i = 0; i < j - 1; i++) {
        for (int m = 0; m < j - i - 1; m++) {
            int len1 = 0;
            while (words[m][len1] != '\0') {
                len1++;
            }
            int len2 = 0;
            while (words[m + 1][len2] != '\0') {
                len2++;
            }
            if (len1 < len2) {
                swapWords(words[m], words[m + 1]);
            }
        }
    }

    printf("Words in order of length (longest to shortest):\n");
    for (int i = 0; i <= j; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
