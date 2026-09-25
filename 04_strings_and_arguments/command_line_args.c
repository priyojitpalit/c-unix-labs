/*
Purpose: Display argc and every string stored in argv.

Compile:
    gcc -Wall -Wextra -std=c11 command_line_args.c -o command_line_args

Run:
    ./command_line_args apple banana
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("argc = %d\n", argc);

    for (int i = 0; i < argc; ++i) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}
