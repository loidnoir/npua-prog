#include <stdio.h>
#include <time.h>

int main()
{
    int n, m, i, j, a[30][30], M, min;

    srand(time(0));

    printf("Enter natural numbers n & m( n & m < 30 ) ");
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            a[i][j] = 50 - rand() % 101;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    j = 0;
    M = a[0][0];
    for (i = 0; i < n; i++)
        if (a[i][j] > M)
            M = a[i][j];

    min = M;

    for (j = 1; j < m; j++)
    {
        M = a[0][j];

        for (i = 0; i < n; i++)
            if (a[i][j] > M)
                M = a[i][j];

        if (min > M)
            min = M;
    }

    printf("The minimum value is %d", min);

    return 0;
}
