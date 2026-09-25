/*
Purpose: Alternate between printing and sleeping so the process can be observed with ps.

Compile:
    gcc -Wall -Wextra -std=c11 process_states.c -o process_states

Run:
    ./process_states

In another terminal, while it is running:
    ps -o pid,stat,comm -C process_states
*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("pid=%ld\n", (long)getpid());
    fflush(stdout);

    for (int i = 1; i <= 6; ++i) {
        printf("iteration %d\n", i);
        fflush(stdout);
        sleep(5);
    }

    return 0;
}
