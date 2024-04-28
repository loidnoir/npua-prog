#include <stdio.h>

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 2);

    int A[N], B[N];

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th number for X: ", i+1);
        scanf("%d", &A[i]);

        B[i] = A[i];

        for (int j = 0; j < i; j++) {
            B[i] += A[j];
        }
    }

    printf("Here are values of B: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}