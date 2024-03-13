#include <stdio.h>

int main() {
    int status = 0;
    int brackets = 0;

    char T[100];

    printf("Input the string: ");
    gets(T);

    int i = 0;

    while (status == 0 && i < sizeof(T)) {
        if (T[i] == '(' && brackets == 0) {
            if (brackets == 0) brackets++;
            else status = 1;
        }

        else if (T[i] == ')') {
            if (brackets == 1) {
                brackets++;
            }

            else {
                status = 1;
            }
        }

        i++;
    }
    
    if (status == 0 && brackets == 2) printf("True");
    else printf("False");

    return 0;
}