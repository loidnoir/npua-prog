#include <stdio.h>

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 2);

    int X[N], Y[N-2];
    int max = 0, min = 0, temp = 0;

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th number for X: ", i+1);
        scanf("%d", &X[i]);

        if (i == 0) {
            min = X[i];
            max = X[i];
        }

        if (X[i] > max) {
            max = X[i];
        }

        if (X[i] < min) {
            min = X[i];
        }

        if (X[i] != min || X[i] != max) {
            Y[i - temp] = X[i];
        }

        else temp++;
    }

    printf("Here are the numbers of Y: ");

    for (int i = 0; i < N-2; i++) {
        printf("%d ", Y[i]);
    }

    return 0;
}