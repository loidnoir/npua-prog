#include <stdio.h>

int main()
{
    int n, i, j, a[20][20], x[400], k;

    printf("Enter n (n < 30)\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("The new vector\n");
    printf("X = ");
    k = -1;
    for (i = 0; i < n; i++)
        if (a[i][i] == 0)
            for (j = 0; j < n; j++)
            {
                k++;
                x[k] = a[i][j];
                printf("%d ", x[k]);
            }

    return 0;
}
