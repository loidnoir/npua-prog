#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, m, i, j, a[30][30];

    srand(time(0));

    printf("Enter n, m (n, m < 30)");
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

    for (i = 0; i < n; i++)
    {
        int k = 0;
        for (j = 0; j < m; j++)
            if ((pow(2, j) < a[i][j]) && (a[i][j] < pow(2, j + 1)))
                k++;

        printf("Quantity of %d row's elements is %d\n", i, k);
    }

    return 0;
}
