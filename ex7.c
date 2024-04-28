#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 0);

    int A[N][2];

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th element x: ", i+1);
        scanf("%d", &A[i][0]);

        printf("Enter %d-th element y: ", i+1);
        scanf("%d", &A[i][1]);
    }


    int maxDistanceIndex1 = 0, maxDistanceIndex2 = 1;
    double maxDistance = distance(A[0][0], A[0][1], A[1][0], A[1][1]);

    for (int i = 1; i < N - 1; i++) {
        double d = distance(A[i][0], A[i][1], A[i+1][0], A[i+1][1]);
        if (d > maxDistance) {
            maxDistance = d;
            maxDistanceIndex1 = i;
            maxDistanceIndex2 = i + 1;
        }
    }

    printf("Indices of points with the biggest distance: %d, %d\n", maxDistanceIndex1, maxDistanceIndex2);

    return 0;
}
