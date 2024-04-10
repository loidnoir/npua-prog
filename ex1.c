#include <stdio.h>
#include <string.h>

struct Adress {
    char city[30];
    char street[30];
    int building;
    int apartment;
};

struct Phone {
    char home[30];
    char cell[30];
};

struct Person {
    char[30] AAH;
    int birthYear;
    struct Adress address;
    struct Phone phone;
};

int main() {
    int n;

    printf("Input the n number: ");
    scanf("%d", &n);

    struct Person people[n];

    // strcpy(people[0].AAH, "Armen");
    // people[0].address.apartment = 12;
    // people[0].address.building = 12;
    // strcpy(people[0].address.city, "Vanadzor");
    // strcpy(people[0].address.street, "Qochar");
    // people[0].birthYear = 2003;
    // strcpy(people[0].phone.cell, "095121212");
    // strcpy(people[0].phone.home, "095121212");

    // strcpy(people[1].AAH, "Alex");
    // people[1].address.apartment = 12;
    // people[1].address.building = 12;
    // strcpy(people[1].address.city, "Yerevan");
    // strcpy(people[1].address.street, "Qochar");
    // people[1].birthYear = 2003;
    // strcpy(people[1].phone.cell, "095121212");
    // strcpy(people[1].phone.home, "095121212");


    for (int i = 0; i < n; i++) {
        printf("Input the %d'th person's AAH: ", i+1);
        char[30] AAH;
        scanf("%s", AAH);
        strcpy(people[i].AAH, AAH);
        
        printf("Input the %d'th person's birth year: ", i+1);
        scanf("%d", &people[i].birthYear);
        
        printf("Input the %d'th person's city name: ", i+1);
        char[30] city;
        scanf("%s", city);
        strcpy(people[i].address.city, city);
        
        printf("Input the %d'th person's street name: ", i+1);
        char[30] street;
        scanf("%s", street);
        strcpy(people[i].address.street, street);
        
        printf("Input the %d'th person's building number: ", i+1);
        scanf("%d", &people[i].address.building);
        
        printf("Input the %d'th person's apartment number: ", i+1);
        scanf("%d", &people[i].address.apartment);
        
        printf("Input the %d'th person's home phone number: ", i+1);
        char[30] homePhone;
        scanf("%s", homePhone);
        strcpy(people[i].phone.home, homePhone);
        
        printf("Input the %d'th person's cell phone number: ", i+1);
        char[30] cellPhone;
        scanf("%s", cellPhone);
        strcpy(people[i].phone.cell, cellPhone);
    }

    for (int i = 0; i < n; i++) {
        if (strcmp(people[i].address.city, "Vanadzor") && people[i].phone.cell[0] == '0' && people[i].phone.cell[1] == '9' && people[i].phone.cell[2] == '5' && people[i].birthYear < 2004) {
            printf("%d\n", people[i].AAH);
        }
    }

    return 0;
}