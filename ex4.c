#include <stdio.h>

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 2);

    int X[N], S = 0;
    int *ptrX = X;

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th number for X: ", i+1);
        scanf("%d", ptrX); 
        ptrX++;
    }

    ptrX = X;

    for (int i = 0; i < N; i++) {
        int duplicateFound = 0;
        int *ptrY = X;

        for (int j = 0; j < i; ++j) {
            if (*ptrY == *ptrX) {
                duplicateFound = 1;
                break;
            }
            ptrY++;
        }

        if (!duplicateFound) {
            ptrY = ptrX + 1;
            for (int k = i + 1; k < N; ++k) {
                if (*ptrY == *ptrX) {
                    S += *ptrX;
                    break;
                }
                ptrY++;
            }
        }
        ptrX++;
    }

    printf("Sum of duplicate numbers is %d.", S);

    return 0;
}
