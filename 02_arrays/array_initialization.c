/*
Purpose: Declare an integer array, initialize its elements, and print them.

Compile:
    gcc -Wall -Wextra -std=c11 array_initialization.c -o array_initialization

Run:
    ./array_initialization
*/

#include <stdio.h>

#define MAX 10

int main(void)
{
    int a[MAX];
    int i;

    for (i = 0; i < MAX; ++i) {
        a[i] = 0;
    }

    for (i = 0; i < MAX; ++i) {
        printf("%d\n", a[i]);
    }

    return 0;
}
