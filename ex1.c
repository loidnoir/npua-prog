#include <stdio.h>

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 2);

    int X[N];
    int *Y[N-2];

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th number for X: ", i+1);
        scanf("%d", &X[i]);
    }

    int *pX = X;
    int *pMax = X, *pMin = X;

    for (int i = 0; i < N; i++) {
        if (*pMax < *pX) {
            pMax = pX;
        }

        if (*pMin >= *pX) {
            pMin = pX;
        }

        pX++;
    }

    for (int i = 0, j = 0; i < N; i++) {
        if (&X[i] != pMax && &X[i] != pMin) {
            Y[j++] = &X[i];
        }
    }

    for (int i = 0; i < N-2; i++) {
        printf("%d ", *Y[i]);
    }

    return 0;
}