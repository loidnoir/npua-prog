#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, m, i, j, a[30][30];

    srand(time(0));

    printf("Input n, m (n, m < 30)");
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

    for (i = 0; i < n; i++)
    {
        int S = 0, k = 0;
        float Z = 0;

        for (j = 0; j < m; j++)
            if (a[i][j] < 0)
            {
                k++;
                S += pow(a[i][j], 2);
            }

        if (k == m)
        {
            Z = sqrt(S / k);
            printf("Sum of %d row's negative elemnts is %.3f\n ", i, Z);
        }

        else
        {
            k = 0;
            for (j = 0; j < m; j++)
                if (a[i][j] > 0)
                    k++;
            printf("Quantity of %d row's positive elements is %d\n ", i, k);
        }
    }

    return 0;
}
