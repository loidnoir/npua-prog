#include <stdio.h>

int main()
{
    int n, i, j, a[30][30], t;

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

    for (i = 0; i < n; i++)
    {
        t = 1;
        for (j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
            {
                t = 0;
                break;
            }

        if (t == 1)
            printf("%d\n", i);
    }

    return 0;
}
