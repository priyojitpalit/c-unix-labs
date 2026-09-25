/*
Purpose: Handle SIGTERM so that the effect of ordinary termination signals can be observed.

Compile:
    gcc -Wall -Wextra -std=c11 stubborn.c -o stubborn

Run:
    ./stubborn

Run in the background:
    ./stubborn &

From another terminal, send SIGTERM with:
    kill <PID>

The program exits normally after receiving SIGTERM.
*/

#include <signal.h>
#include <stdio.h>
#include <unistd.h>

static volatile sig_atomic_t stop = 0;

static void handle_term(int signal_number)
{
    (void)signal_number;
    stop = 1;
}

int main(void)
{
    signal(SIGTERM, handle_term);

    printf("pid=%ld\n", (long)getpid());
    fflush(stdout);

    while (!stop) {
        printf("running\n");
        fflush(stdout);
        sleep(2);
    }

    printf("SIGTERM received; exiting\n");

    return 0;
}
