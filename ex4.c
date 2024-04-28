#include <stdio.h>

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 2);

    int X[N], S = 0;

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th number for X: ", i+1);
        scanf("%d", &X[i]); 
    }

    for (int i = 0; i < N; i++) {
        int duplicateFound = 0;

        for (int j = 0; j < i; ++j) {
            if (X[j] == X[i]) {
                duplicateFound = 1;
                break;
            }
        }

        if (!duplicateFound) {
            for (int k = i + 1; k < N; ++k) {
                if (X[k] == X[i]) {
                    S += X[i];
                    break;
                }
            }
        }
    }

    printf("Sum of duplciate numbers is %d.", S);

    return 0;
}