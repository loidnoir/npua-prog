#include <stdio.h>

int main() {
    int n;
    
    printf("Input the number of string chars: ");
    scanf("%d", &n);
    
    int m = n;
    char T[n];
    
    printf("Input the T string: ");
    scanf("%s", &T);

    for (int i = 0; i < n; i++) {
        if ((i+1) % 3 == 0) {
            m--;
        }
    }

    char B[m];
    int temp = 0;

    for (int i = 0; i < n; i++) {
        if ((i+1) % 3 != 0) {
            B[i - temp] = T[i];
        }

        else {
            temp++;
        }
    }

    printf("%s", B);

    return 0;
}