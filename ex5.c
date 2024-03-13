#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    
    printf("Input the number of string chars: ");
    scanf("%d", &n);
    
    char T[n];
    bool b = true;
    
    printf("Input the T string: ");
    scanf("%s", &T);

    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
        if (T[i] != T[j]) b = false;
    }

    if (b) {
        printf("true");
    }

    else {
        printf("false");
    }

    return 0;
}