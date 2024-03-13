#include <stdio.h>

int main() {
    int n;
    int m;
    
    printf("Input the number of string chars for T1: ");
    scanf("%d", &n);

    printf("Input the number of string chars for T2: ");
    scanf("%d", &m);
    
    char T1[n];
    char T2[m];
    
    printf("Input the T1 string: ");
    scanf("%s", &T1);

    printf("Input the T2 string: ");
    scanf("%s", &T2);

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (T1[i] == T2[j]) count++;
        }
    }

    printf("The duplicate char amount is %d", count);

    return 0;
}