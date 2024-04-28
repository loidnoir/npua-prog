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

    bool T = false;
    int consecutiveZeros = 0;

    for (int i = 0; i < N; ++i) {
        if (X[i] == 0) {
            consecutiveZeros++;
        } else {
            consecutiveZeros = 0;
        }

        if (consecutiveZeros == 5) {
            T = true;
            break;
        }
    }

    printf("T: %s\n", T ? "true" : "false");

    return 0;
}
