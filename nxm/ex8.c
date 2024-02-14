#include <stdio.h>
#include <time.h>

int main()
{
    int n, m, i, j, a[30][30], z;

    srand(time(0));

    printf("Enter n, m (n, m < 30)\n");
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

    for (j = 0; j <= (m - 1) / 2; j++)
        for (i = 0; i < n; i++)
        {
            z = a[i][j];
            a[i][j] = a[i][m - 1 - j];
            a[i][m - 1 - j] = z;
        }

    printf("The new matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
 