#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, m, i, j, a[30][30], M, t, c, l;

    srand(time(0));

    printf("Enter n, m (n, m < 30)");
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            a[i][j] = 500 - rand() % 1001;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int p = 0, k = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (a[i][j] > a[p][k])
            {
                p = i;
                k = j;
            }

    M = a[p][k];
    int S = 0;

    for (i = 0; i < n; i++)
    {
        t = 5;
        for (j = 0; j < m; j++)
            if (a[i][j] == M)
            {
                if (i != 0)
                    for (c = 0; c < i; c++)
                        if (a[c][j] == M)
                        {
                            t = 0;
                            break;
                        }
                if (t != 0)
                {
                    t = 1;
                    for (l = 0; l < n; l++)
                        S = S + a[l][j];
                }
            }
        if ((t == 1) || (t == 0))
            for (j = 0; j < m; j++)
                S = S + a[i][j];
    }

    printf("Sum is %d", S);

    return 0;
}
