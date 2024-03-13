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

    for (int i = 0; i < j; i++) {
        if (getLength(words[i]) == 0) continue;

        printf("%s", words[i]);

        if (i != j-1) printf("%*c", 1, ' ');
    }

    return 0;
}