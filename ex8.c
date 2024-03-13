#include <stdio.h>

int main() {
    char T[100];
    char F[100];

    int temp = 0;

    printf("Input the string: ");
    gets(T);

    for (int i = 0; i < sizeof(T); i++) {
        int count = 0;

        for (int j = 0; j < sizeof(F); j++) {
            if (F[j] == T[i]) {
                count++;
            }
        }

        if (count == 0) {
            F[i - temp] = T[i];
        }

        else {
            temp++;
        }
    }

    printf("%s", F);
 
    return 0;
}