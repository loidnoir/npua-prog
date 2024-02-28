#include <stdio.h>

int main() {
    int n;

    printf("Input the number: ");
    scanf("%d", &n);

    int status = 0;
    int lastone;

    if ((n & 1) == 1) {
        lastone = 0;
    }

    else {
        lastone = 1;
    }

    while (n > 0) {
        if ((n & 1) == lastone) {
            status = 0;
            n = 0;
        }

        else {
            status = 1;
        }

        lastone = n & 1;
        n >>= 1;
    }

    if (status == 1) {
        printf("The units were consecutive");
    }

    else {
        printf("The units were not consecutive");
    }
}