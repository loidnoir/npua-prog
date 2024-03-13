#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    
    printf("Input the number of string chars: ");
    scanf("%d", &n);
    
    char T[n];
    
    printf("Input the T string: ");
    scanf("%s", &T);

    int startedStatus = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (T[i] == ':') {
            startedStatus++;
        }

        if (startedStatus == 1) {
            if (isdigit(T[i])) {
                count++;
            }
        }
    }

    printf("The digits mount between the are %d", count);

    return 0;
}