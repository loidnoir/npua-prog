#include <stdio.h>

int getLength(char word[]) {
    int length = 0;

    while (word[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char T[100];
    char words[100][100];

    printf("Input the string: ");
    gets(T);

    int j = 0;
    int k = 0;

    for (int i = 0; T[i] != '\0'; i++) {
        if (T[i] == ' ') {
            words[j][k] = '\0';
            j++;
            k = 0;
        } else {
            words[j][k] = T[i];
            k++;
        }
    }

    words[j][k] = '\0';

    for (int i = 0; i <= j; i++) {
        int lastIndex = getLength(words[i]) - 1;
        int status = 0;

        for (int k = 0; k < lastIndex - k; k++) {
            if (words[i][k] != words[i][lastIndex - k]) status = 1;
        }

        if (status == 0) {
            printf("%s ", words[i]);
        }
    }

    return 0;
}