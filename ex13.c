#include <stdio.h>

int count_vowels(const char *word) {
    int count = 0;
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; word[i] != '\0'; i++) {
        for (int j = 0; j < 10; j++) {
            if (word[i] == vowels[j]) {
                count++;
                break;
            }
        }
    }
    return count;
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

    int max_vowels = 0;
    int num_words_with_max_vowels = 0;
    char *words_with_max_vowels[100];

    for (int i = 0; i < j; i++) {
        int vowels_count = count_vowels(words[i]);
        if (vowels_count > max_vowels) {
            max_vowels = vowels_count;
            words_with_max_vowels[0] = words[i];
            num_words_with_max_vowels = 1;
        } else if (vowels_count == max_vowels) {
            words_with_max_vowels[num_words_with_max_vowels] = words[i];
            num_words_with_max_vowels++;
        }
    }

    printf("Word(s) with the most vowels (%d):\n", max_vowels);
    for (int i = 0; i < num_words_with_max_vowels; i++) {
        printf("- %s\n", words_with_max_vowels[i]);
    }

    return 0;
}
