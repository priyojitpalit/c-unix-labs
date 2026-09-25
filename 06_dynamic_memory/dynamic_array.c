/*
Purpose: Allocate an integer array dynamically, use it, and release the memory.

Compile:
    gcc -Wall -Wextra -std=c11 dynamic_array.c -o dynamic_array

Run:
    ./dynamic_array 5
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number_of_elements>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    if (n <= 0) {
        fprintf(stderr, "The number of elements must be positive.\n");
        return 1;
    }

    int *a = malloc((size_t)n * sizeof *a);

    if (a == NULL) {
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        a[i] = i * i;
    }

    for (int i = 0; i < n; ++i) {
        printf("%d\n", a[i]);
    }

    free(a);

    return 0;
}
