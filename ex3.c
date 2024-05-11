#include <stdio.h>

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 2);

    int X[N], count = 0;
    int *ptrX = X;

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th number for X: ", i+1);
        scanf("%d", ptrX); 
        ptrX++;
    }

    ptrX = X;

    for (int i = 0; i < N; i++) {
        int stat = 0;
        int *ptrY = X;

        for (int j = 0; j < N; j++) {
            if (*ptrX == *ptrY) {
                stat++;
            }
            ptrY++;
        }

        if (stat == 1) count++;
        ptrX++;
    }

    printf("There were %d numbers without duplicates.", count);

    return 0;
}
