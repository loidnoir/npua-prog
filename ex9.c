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
        printf("Enter %d-th number for X: ", i+1);
        scanf("%d", &X[i]); 
    }

    bool allValuesInRange = true;

    for (int i = 0; i < N; ++i) {
        if (X[i] != i + 1) {
            allValuesInRange = false;
            break;
        }
    }

    printf("%d\n", allValuesInRange ? 1 : 0);

    return 0;
}
