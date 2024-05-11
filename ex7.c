#include <stdio.h>
#include <math.h>

double distance(int *point1, int *point2) {
    return sqrt(pow(point2[0] - point1[0], 2) + pow(point2[1] - point1[1], 2));
}

int main() {
    int N;

    do {
        printf("Enter N: ");
        scanf("%d", &N);
    } while (N <= 0);

    int A[N][2];

    for (int i = 0; i < N; i++) {
        printf("Enter %d-th element x: ", i + 1);
        scanf("%d", &A[i][0]);

        printf("Enter %d-th element y: ", i + 1);
        scanf("%d", &A[i][1]);
    }


    int maxDistanceIndex1 = 0, maxDistanceIndex2 = 1;
    double maxDistance = distance(A[0], A[1]);

    for (int i = 1; i < N - 1; i++) {
        double d = distance(A[i], A[i + 1]);
        if (d > maxDistance) {
            maxDistance = d;
            maxDistanceIndex1 = i;
            maxDistanceIndex2 = i + 1;
        }
    }

    printf("Indices of points with the biggest distance: %d, %d\n", maxDistanceIndex1, maxDistanceIndex2);

    return 0;
}
