#include <stdio.h>

int main() {
    int n;
    
    printf("Input the number of string chars: ");
    scanf("%d", &n);
    
    int m = n;
    char T[n];
    
    printf("Input the T string: ");
    scanf("%s", &T);
    
    for (int i = 0; i < n-1; i++) {
        if (T[i] == 'a' && T[i+1] == 'b') {
            m-=2;
        }
    }

    char B[m];
    int temp = 0;
    
    for (int i = 0; i < n-1; i++) {
        if (T[i] == 'a' && T[i+1] == 'b') {
            temp+=2;
        }
        
        else {
            B[i - temp] = T[i];
        }
    }
    
    printf("%s", B);

    return 0;
}