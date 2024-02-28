#include <stdio.h>

int main() {
    int n;

    printf("Input the number: ");
    scanf("%d", &n);

    int count = 0;

    while (n > 0) {
        if ((n & 1) == 1) {
            count++;
        }

        n >>= 1;
    }

    printf("N contains %d digit of 1", count);

    return 0;
}