#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j, a[30][30], max;

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

    max = a[1][0];
    for (i = 2; i < n; i++)
        for (j = 0; j < i; j++)
            if (a[i][j] > max)
                max = a[i][j];

    printf("Sum of the maximum is %d", max);

    return 0;
}
