#include <stdio.h>

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 2);

    int X[N], Y = 0;

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th number for X: ", i+1);
        scanf("%d", &X[i]);

        if (X[i] < 0) {
            Y = 1;
        }
    }

    if (Y == 0) {
        printf("Y = %d", Y);
        return 0;
    }

    int i = 0;

    while (X[i] >= 0) {
        int A = X[i];

        for (int j = 0; j < i; j++) {
            A *= X[j];
        }

        Y += A;
        i++;
    }

    printf("Y = %d", Y);

    return 0;
}