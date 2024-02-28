#include "stdio.h"

int main() {
    int n;
    
    printf("Input the number to check if 101 exists in it binary units: ");
    scanf("%d", &n);

    int stat = 0;

    while (n > 0 && stat == 0) {
        if ((n & 7) == 5) {
            stat = 1;
        }

        n >>= 1;
    }

    if (stat == 1) {
        printf("The 101 was found in the given number");
    }

    else {
        printf("The 101 was not found in the given number");
    }

    return 0;
}