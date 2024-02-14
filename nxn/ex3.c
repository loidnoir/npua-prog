#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j, a[30][30], min;

    srand(time(0));

    printf("Enter n (n < 30)\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = 50 - rand() % 101;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    min = a[0][0];
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
            if (a[i][j] < min)
                min = a[i][j];
    }

    printf("The minimum sum is %d", min);

    return 0;
}
