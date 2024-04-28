#include <stdio.h>

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 0);

    int X[N], incorrectIndex = -1;

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th number for X: ", i+1);
        scanf("%d", &X[i]); 
    }

    for (int i = 0; i < N - 1; ++i) {
        if (X[i] >= X[i + 1]) {
            incorrectIndex = i;
            break;
        }
    }

    if (incorrectIndex != -1) {
        if (X[incorrectIndex] >= X[incorrectIndex + 1]) {
            X[incorrectIndex] = X[incorrectIndex + 1];
        }
        
        else {
            X[incorrectIndex] = X[incorrectIndex - 1];
        }

        X[0] ++;

        for (int i = 0; i < N; ++i) {
            printf("%d ", X[i]);
        }

        printf("\n");
    }
    
    else {
        X[0] ++;

        for (int i = 0; i < N; ++i) {
            printf("%d ", X[i]);
        }

        printf("\n");
    }

    return 0;
}
