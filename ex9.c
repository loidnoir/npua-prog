#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 0);

    int X[N];

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th number for X: ", i + 1);
        scanf("%d", &X[i]);
    }

    bool allValuesInRange = true;
    int *ptrX = X;

    for (int i = 1; i <= N; ++i) {
        if (*ptrX != i) {
            allValuesInRange = false;
            break;
        }
        ptrX++;
    }

    printf("%d\n", allValuesInRange ? 1 : 0);

    return 0;
}
