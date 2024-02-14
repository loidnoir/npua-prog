#include <stdio.h>
#include <time.h>

int main()
{
    int n, m, i, j, a[30][30], min, Min, S;

    srand(time(0));

    printf("Enter natural numbers n & m( n & m < 30) ");
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
    S = 1;
    for (i = 0; i < n; i++)
        S = S * a[i][j];

    min = 0;
    Min = S;

    for (j = 1; j < m; j++)
    {
        S = 1;
        for (i = 0; i < n; i++)
            S = S * a[i][j];

        if (S < Min)
            min = j;
    }

    printf("The minimum is %d", min);

    return 0;
}
