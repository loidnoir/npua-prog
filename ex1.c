#include<stdio.h>

int main()
{
    int mask = 0b11111 << 7;
    int n;

    printf("Input the number: ");
    scanf("%d", &n);

    int result = n & mask;
    int count = 0;

    while (result) {
        result = result & (result - 1);
        count++;
    }
    
    printf("Amount of units are: %d ", count);

    return 0;
}
