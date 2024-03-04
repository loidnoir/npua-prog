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
        if (T[i] == 'x') {
            m+=2;
        }
        
        else {
            m++;
        }
    }
    
    char B[m];
    int temp = 0;
    
    for (int i = 0; i < n; i++) {
        if (T[i] == 'x') {
            B[i+temp] = 'y';
            B[i+1+temp] = 'y';
            temp++;
        }
        
        else {
            B[i + temp] = T[i];
        }
    }
    
    printf("%s", B);

    return 0;
}