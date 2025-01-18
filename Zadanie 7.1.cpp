#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

struct Person {
    char first_name[50];
    char last_name[50];
};

int main() {
    struct Person people[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Podaj imie osoby nr %d: ", i + 1);
        scanf_s("%s", people[i].first_name, 50);

        printf("Podaj nazwisko osoby nr %d: ", i + 1);
        scanf_s("%s", people[i].last_name, 50);
    }

    printf("\nImiona i nazwiska trzech osob:\n");
    for (i = 0; i < 3; i++) {
        printf("Osoba nr %d: %s %s\n", i + 1, people[i].first_name, people[i].last_name);
    }

    return 0;
}