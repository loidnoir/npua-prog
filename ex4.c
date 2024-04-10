# include <stdio.h>
# include <string.h>

struct Book {
    char title[30];
    int pages;
    int price;
};

struct Author {
    char AAH[30];
    struct Book books[20];
};

int main() {
    int n;
    int P;

    printf("Please input the amount of authors: ");
    scanf("%d", &n);

    printf("Please input the value for P: ");
    scanf("%d", &P);

    struct Author authors[n];

    for (int i = 0; i < n; i++) {
        char AAH[30];

        printf("Input %d-th author' AAH: ", i+1);
        getchar();
        gets(AAH);
        strcpy(authors[i].AAH, AAH);

        printf("\n");
        
        for (int j = 0; j < 20; j++) {
            char title[30];

            printf("Input %d-th author' %d-th book title: ", i+1, j+1);
            getchar();
            gets(title);
            strcpy(authors[i].books[j].title, title);
            
            printf("Input %d-th author' %d-th book pages number: ", i+1, j+1);
            scanf("%d", &authors[i].books[j].pages);

            printf("Input %d-th author' %d-th book price: ", i+1, j+1);
            scanf("%d", &authors[i].books[j].price);

            printf("\n");
        }

        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        printf("\"%s\" author' books...\n", authors[i].AAH);

        for (int j = 0; j < 20; j++) {
            if (authors[i].books[j].pages > 200 && authors[i].books[j].price < P) {
                printf("- \"%s\"\n", authors[i].books[j].title);
            }
        }

        printf("\n");
    }

    return 0;
}