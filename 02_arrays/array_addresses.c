/*
Purpose: Show that array elements are stored at consecutive memory locations.

Compile:
    gcc -Wall -Wextra -std=c11 array_addresses.c -o array_addresses

Run:
    ./array_addresses
*/

#include <stdio.h>

int main(void)
{
    int a[] = {10, 20, 30, 40};
    int n = (int)(sizeof(a) / sizeof(a[0]));

    for (int i = 0; i < n; ++i) {
        printf("a[%d] = %d at %p\n", i, a[i], (void *)&a[i]);
    }

    printf("sizeof(int) = %zu\n", sizeof(int));

    return 0;
}
