#include <stdio.h>

int main()
{
    int n, m, i, j, a[30][30], b, k, t;

    printf("Enter n, m (n, m < 30)");
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

    int p = 0;

    for (i = 0; i < n; i++)
    {
        t = 1;
        for (j = 0; j < m; j++)
        {
            b = a[i][j];
            for (k = j + 1; k < m; k++)
                if (a[i][k] == b)
                {
                    t = 0;
                    break;
                }
            if (t == 0)
                break;
        }
        if (t == 1)
        {
            p++;
            printf("Line number is %d\n", i);
        }
    }

    if (p == 0)
        printf("NO");

    return 0;
}
