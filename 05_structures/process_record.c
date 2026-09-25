/*
Purpose: Represent process-like information with a structure and print it through a pointer.

Compile:
    gcc -Wall -Wextra -std=c11 process_record.c -o process_record

Run:
    ./process_record
*/

#include <stdio.h>

struct Process {
    int pid;
    const char *name;
    int priority;
};

void print_process(const struct Process *p)
{
    printf("pid=%d name=%s priority=%d\n",
           p->pid, p->name, p->priority);
}

int main(void)
{
    struct Process p = {123, "shell", 5};

    print_process(&p);

    return 0;
}
