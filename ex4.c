#include <stdio.h>

int main() {
    char n;

    printf("Input the char: ");
    scanf("%c", &n);

    int status = 0;

    for (int i = 0; i <= 3; i ++) {
        if (n >> (3 - i) << 7 >> 7 == n << i >> 7) {
            status = 1;
        }

        else {
            status = 0;
        }
    }

    if (status == 1) {
        printf("Binary representation is symetric");
    }

    else {
        printf("Binary representation is not symetric");
    }

    return 0;
}