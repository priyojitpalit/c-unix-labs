/*
Purpose: Store several structures in an array and pass each structure by pointer to a function.

Compile:
    gcc -Wall -Wextra -std=c11 student_records.c -o student_records

Run:
    ./student_records
*/

#include <stdio.h>

struct student {
    const char *name;
    int id;
};

typedef struct student Student;

void print_student(const Student *ps)
{
    printf("name: %s, id: %d\n", ps->name, ps->id);
}

int main(void)
{
    Student students[3] = {
        {"Ancy", 1},
        {"Mike", 2},
        {"Gavin", 3}
    };

    for (int i = 0; i < 3; ++i) {
        print_student(&students[i]);
    }

    return 0;
}
