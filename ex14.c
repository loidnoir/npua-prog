#include <stdio.h>

int getLength(char word[]) {
    int length = 0;
    while (word[length] != '\0') {
        length++;
    }
    return length;
}

void sortWord(char word[]) {
    int length = getLength(word);
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (word[i] > word[j]) {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
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
            sortWord(words[j]);
            j++;
            k = 0;
        } else {
            words[j][k] = T[i];
            k++;
        }
    }

    words[j][k] = '\0';

    printf("Words in alphabetical order:\n");
    for (int i = 0; i <= j; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
