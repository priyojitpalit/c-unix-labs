/*
Purpose: Keep a process actively using the CPU so its running state can be observed.

Compile:
    gcc -Wall -Wextra -std=c11 busy.c -o busy

Run:
    ./busy

Run in the background:
    ./busy &

Stop it with Ctrl+C in the foreground or with kill when running in the background.
*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    volatile unsigned long counter = 0;

    printf("pid=%ld\n", (long)getpid());
    fflush(stdout);

    while (1) {
        ++counter;
    }

    return 0;
}
