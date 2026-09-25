/*
Purpose: Convert command-line strings to integers and use the resulting values.

Compile:
    gcc -Wall -Wextra -std=c11 add_arguments.c -o add_arguments

Run:
    ./add_arguments 10 20
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <integer1> <integer2>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("%d\n", a + b);

    return 0;
}
