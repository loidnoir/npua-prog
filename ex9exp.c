int main() {
    int n;
    int[n] nums;
    int[n] counts;
    int finalCount = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        counts[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 0;

        while (n > 0) {
            if ((n & 1) == 1) {
                count++;
            }

            n >>= 1;
        }

        counts[i] = count;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (counts[i] == counts[j]) {
                finalCount++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (counts[i] != 0) {
            printf("%d %d", nums[i], counts[i]);
        }
    }

    printf("The final amount of duplicates is %d", finalCount);
}