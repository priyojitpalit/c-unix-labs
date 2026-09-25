/*
Purpose: Print one character repeatedly at a selected time interval.
This program is useful for observing foreground and background jobs.

Compile:
    gcc -Wall -Wextra -std=c11 ticker.c -o ticker

Run:
    ./ticker A 1

Example background run:
    ./ticker A 1 &
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <character> <seconds>\n", argv[0]);
        return 1;
    }

    char c = argv[1][0];
    int seconds = atoi(argv[2]);

    if (seconds < 0) {
        fprintf(stderr, "The delay must be nonnegative.\n");
        return 1;
    }

    while (1) {
        printf("%c ", c);
        fflush(stdout);
        sleep((unsigned int)seconds);
    }

    return 0;
}
