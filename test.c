#include "stdio.h"

int main() {
    int a = 0b00001;
    printf("%d", (a & 1) == 1);

    return 0;
}