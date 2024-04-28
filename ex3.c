#include <stdio.h>

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 2);

    int X[N], count = 0;

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th number for X: ", i+1);
        scanf("%d", &X[i]); 
    }

    for (int i = 0; i < N; i++) {
        int stat = 0;

        for (int j = 0; j < N; j++) {
            if (X[i] == X[j]) {
                stat++;
            }
        }

        if (stat == 1) count++;
    }

    printf("There were %d numbers without duplicates.", count);

    return 0;
}