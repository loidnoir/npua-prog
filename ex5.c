# include <stdio.h>
# include <string.h>

struct Movie {
    char name[30];
    int  series;
};

struct Cinema {
    char name[30];
    struct Movie movie[30];
    char start[30];
    char end[30];
    char address[30];
};

int main() {
    int n;

    printf("Please input the amount of cinemas: ");
    scanf("%d", &n);

    struct Cinema cinemas[n];
    
    for (int i = 0; i < n; i++) {
        char name[30];
        char movieName[30];
        char start[30];
        char end[30];
        char address[30];

        printf("Input cinema name: ");
        getchar();
        gets(name);

        printf("Input mvoie name: ");
        getchar();
        gets(movieName);

        printf("Input amount of series: ");
        scanf("%d", &cinemas[i].movie->series);

        printf("Input %s' start time: ", name);
        getchar();
        gets(start);

        printf("Input %s' end time: ", name);
        getchar();
        gets(end);

        printf("Input %s' address: ", name);
        getchar();
        gets(address);

        strcpy(cinemas[i].name, name);
        strcpy(cinemas[i].movie->name, movieName);
        strcpy(cinemas[i].start, start);
        strcpy(cinemas[i].end, end);
        strcpy(cinemas[i].address, address);

        printf("\n");
    }

    char desiredMovie[30];

    printf("Input desired movie name: ");
    getchar();
    gets(desiredMovie);

    for (int i = 0; i < n; i++) {
        if (strcmp(cinemas[i].movie->name, desiredMovie)) {
            printf("\"%s\", %s (%s - %s)", cinemas[i].name, cinemas[i].address, cinemas[i].start, cinemas[i].end);
        }
    }

    return 0;
}