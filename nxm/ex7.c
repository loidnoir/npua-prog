#include <stdio.h>

int main()
{
    int n, m, i, j, a[30][30], max, M, b, t, k;

    printf("Enter n, m  (n, m <= 30)\n");
    scanf("%d %d", &n, &m);

    printf("Input elements for matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    k = 0;

    for (i = 0; i < n; i++)
    {
        t = 1;
        max = a[i][0];

        for (j = 1; j < m; j++)
            if (a[i][j] > max)
            {
                max = a[i][j];
                M = j;
            }
        b = max;
        for (i = 0; i < n; i++)
            if (b > a[i][M])
            {
                t = 0;
                break;
            }

        if (t == 1)
        {
            k++;
            printf("The element is %d\n", b);
        }
    }
    if (k == 0)
        printf("NO");

    return 0;
}
