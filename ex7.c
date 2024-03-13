#include <stdio.h>

int main() {
    char T[100];
    char F[100];
    int temp = 0;

    printf("Input the string: ");
    gets(T);

    for (int i = 0; i < sizeof(T); i++) {
        int count = 0;

        for (int j = 0; j < sizeof(T); j++) {
            if (T[i] == T[j]) {
                count++;
            }
        }

        if (count > 1) {
            temp++;
        }

        else {
            F[i - temp] = T[i];
        }
    }

    printf("%s", F);

    return 0;
}