#include <stdio.h>
#include <string.h>

struct Student {
    char AAH[30];
    char gender[30];
    int grades[5];
    int pension;
};

int main() {
    char subjects[5][30];

    for (int i = 0; i < 5; i++) {
        printf("Input %d subject name: ", i+1);
        gets(subjects[i]);
    }

    int n;

    printf("Please input the amount of users: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        char AAH[30];
        char gender[30];

        printf("Input %d-th student' AAH: ", i+1);
        getchar();
        gets(AAH);

        printf("Input %d-th student' gender: ", i+1);
        getchar();
        gets(gender);

        strcpy(students[i].AAH, AAH);
        strcpy(students[i].gender, gender);

        for (int j = 0; j < 5; j++) {
            printf("Input %d-th student' %s grade: ", i+1, subjects[j]);
            scanf("%d", &students[i].grades[j]);
        }

        printf("Input %d-th studnet' pansion: ", i+1);
        scanf("%d", &students[i].pension);

        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        char *subs[5];
        int status = 0;

        for (int j = 0; j < 5; j++) {
            if (students[i].grades[j] < 41) {
                subs[j] = subjects[j];
                status++;
            }

            else {
                subs[j] = NULL;
            }
        }

        if (status > 0) {
            printf("Student \"%s\" has fails from those subjects` ", students[i].AAH);

            for (int j = 0; j < 5; j++) {
                if (subs[j] != NULL) {
                    printf("%s ", subs[j]);
                }
            }

            printf("\n");
        }
    }

    return 0;
}