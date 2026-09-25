/*
Purpose: A minimal C program that prints a value and the process ID.

Compile:
    gcc -Wall -Wextra -std=c11 hello.c -o hello

Run:
    ./hello
*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int x = 40;
    x = x + 2;

    printf("hello from pid=%ld; x=%d\n", (long)getpid(), x);

    return 0;
}
