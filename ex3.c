# include <stdio.h>
# include <string.h>
# include <ctype.h>

struct Family {
    int male_children;
    int female_children;
    int partner;
};

struct Person {
    char AAH[30];
    char gender[30];
    struct Family family;
    int wage;
};

int main() {
    int n;
    int P;

    printf("Please input the amount of people: ");
    scanf("%d", &n);

    printf("Please input integer for P: ");
    scanf("%d", &P);

    struct Person people[n];

    for (int i = 0; i < n; i++) {
        char AAH[30];
        char gender[30];

        printf("Input %d-th person' AAH: ", i+1);
        getchar();
        gets(AAH);

        printf("Input %d-th person' gender: ", i+1);
        getchar();
        gets(gender);

        strcpy(people[i].AAH, AAH);
        strcpy(people[i].gender, gender);

        printf("Input %d-th person' male children amount: ", i+1);
        scanf("%d", &people[i].family.male_children);

        printf("Input %d-th person' female children amount: ", i+1);
        scanf("%d", &people[i].family.female_children);

        printf("Input %d-th person' partners amount: ", i+1);
        scanf("%d", &people[i].family.partner);

        printf("Input %d-th person' wage: ", i+1);
        scanf("%d", &people[i].wage);

        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        if (people[i].family.partner == 0 && strcmp("male", people[i].gender) && (people[i].family.female_children > 0 || people[i].family.male_children > 9))  {
            int averageWage = people[i].wage / (1 + people[i].family.partner + people[i].family.female_children + people[i].family.male_children);

            if (averageWage < P) {
                printf("%s", people[i].AAH);
            }
        }
    }

    return 0;
}