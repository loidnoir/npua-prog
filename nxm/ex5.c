#include <stdio.h>

int main()
{
    int n, m, i, j, a[30][30], t;

    printf("Enter natural numbers n & m( n & m < 30 ) ");
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

    int k = 0;

    for (i = 1; i < n; i++)
    {
        t = 1;
        for (j = 0; j < m; j++)
            if (a[i][j] != a[0][j])
            {
                t = 0;
                break;
            }

        if (t == 1)
            k++;
    }

    printf("%d", k);

    return 0;
}
