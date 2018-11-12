#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

struct person {
    char name [20];
    int day;
    int month;
    int year;

    person () {}

    person (char *n, int d, int m, int y) {
        strcpy(name, n);
        day = d;
        month = m;
        year = y;
    }
};

int main ()
{
    int n;

    while ( scanf ("%d", &n) != EOF ) {
        person youngest ("", 0, 0, 0);
        person oldest ("", 31, 12, 9999);
        person input;

        for ( int i = 0; i < n; i++ ) {
            scanf ("%s %d %d %d", input.name, &input.day, &input.month, &input.year);


            if ( input.year > youngest.year ) youngest = input;
            else if ( input.year == youngest.year && input.month > youngest.month ) youngest = input;
            else if ( input.year == youngest.year && input.month == youngest.month && input.day > youngest.day ) youngest = input;

            if ( input.year < oldest.year ) oldest = input;
            else if ( input.year == oldest.year && input.month < oldest.month ) oldest = input;
            else if ( input.year == oldest.year && input.month == oldest.month && input.day < oldest.day ) oldest = input;
        }

        printf ("%s\n%s\n", youngest.name, oldest.name);
    }

    return 0;
}
