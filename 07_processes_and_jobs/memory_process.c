/*
Purpose: Allocate memory in one process and repeatedly modify the value stored there.

Compile:
    gcc -Wall -Wextra -std=c11 memory_process.c -o memory_process

Run:
    ./memory_process

Run two copies in separate terminals to compare their process IDs and addresses.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int *p = malloc(sizeof *p);

    if (p == NULL) {
        return 1;
    }

    *p = 0;

    printf("pid=%ld address=%p\n", (long)getpid(), (void *)p);
    fflush(stdout);

    for (int i = 0; i < 8; ++i) {
        sleep(1);
        ++(*p);
        printf("pid=%ld value=%d\n", (long)getpid(), *p);
        fflush(stdout);
    }

    free(p);

    return 0;
}
