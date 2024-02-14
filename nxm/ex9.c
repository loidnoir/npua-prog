#include <stdio.h>
#include <time.h>

int main()
{
    int n, m, i, j, a[30][30], b[30][30], t, k, p;

    srand(time(0));

    printf("Enter n, m (n, m < 30 )");
    scanf("%d %d", &n, &m);

    printf("Input elements for matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            a[i][j] = 50 - rand() % 101;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    k = 0;

    for (j = 0; j < m; j++)
    {
        t = 1;
        for (i = 0; i < n; i++)
            if (a[i][j] >= 0)
            {
                t = 0;
                break;
            }

        if (t == 1)
            k++;

        if (t != 1)
            for (i = 0; i < n; i++)
                b[i][j - k] = a[i][j];
    }

    printf("The new matrix\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= m - 1 - k; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}
