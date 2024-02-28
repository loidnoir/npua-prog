#include <stdio.h>

int main() {
    int n;

    printf("Input the number: ");
    scanf("%d", &n);

    int second_part = n >> 8;
    int result = n & second_part;
    int count = 0;

    while (result) {
        result = result & (result - 1);
        count++;
    }

    printf("There are %d repeated numbers from 1..8 units", count);

    return 0;
}