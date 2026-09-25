/*
Purpose: Check for a required number of command-line arguments and print them.

Compile:
    gcc -Wall -Wextra -std=c11 three_arguments.c -o three_arguments

Run:
    ./three_arguments red green blue
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        printf("Usage: %s <first> <second> <third>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        printf("argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
