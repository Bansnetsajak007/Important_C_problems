//perferct example of nested structure

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date dob;
};

int main() {
    struct Person person;

    printf("Enter name: ");
    fgets(person.name, 15, stdin);

    printf("Enter date of birth (day month year): ");
    scanf("%d %d %d", &person.dob.day, &person.dob.month, &person.dob.year);

    printf("\n");
    printf("Name: %s", person.name);
    printf("Date of Birth: %d-%d-%d\n", person.dob.day, person.dob.month, person.dob.year);

    return 0;
}
