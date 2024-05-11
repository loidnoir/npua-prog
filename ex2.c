#include <stdio.h>

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 2);

    int A[N], B[N];
    int *ptrA = A;
    int *ptrB = B;

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th number for X: ", i+1);
        scanf("%d", ptrA);

        *ptrB = *ptrA;

        for (int j = 0; j < i; j++) {
            *ptrB += *(A + j);
        }

        ptrA++;
        ptrB++;
    }

    printf("Here are values of B: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
