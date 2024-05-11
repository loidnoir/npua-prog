#include <stdio.h>
#include <stdbool.h>

#define MAX_N 100

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 0 || N > MAX_N);

    int Y[MAX_N], X;

    for (int i = 0; i < N; i++) {
        do {
            printf("Enter %d-th number for X: ", i + 1);
            scanf("%d", &Y[i]);
        } while (Y[i] <= 0);
    }

    do {
        printf("Enter a natural number: ");
        scanf("%d", &X);
    } while (X <= 0);

    int k = -1;
    for (int i = 0; i < N; i++) {
        if (Y[i] > X) {
            k = i;
            break;
        }
    }

    if (k != -1) {
        printf("k: %d\n", k);
    } else {
        printf("No such k exists.\n");
    }

    return 0;
}
