/*
Purpose: Compute the length of a C string by moving a pointer until the null terminator.

Compile:
    gcc -Wall -Wextra -std=c11 string_length.c -o string_length

Run:
    ./string_length
*/

#include <stdio.h>

int my_strlen(const char *s)
{
    int n = 0;

    while (*s != '\0') {
        ++n;
        ++s;
    }

    return n;
}

int main(void)
{
    const char *word = "computer";

    printf("length = %d\n", my_strlen(word));

    return 0;
}
