/*
Purpose: Pass an array to a function together with its length.

Compile:
    gcc -Wall -Wextra -std=c11 sum_array.c -o sum_array

Run:
    ./sum_array
*/

#include <stdio.h>

int sum(const int *a, int n)
{
    int total = 0;

    for (int i = 0; i < n; ++i) {
        total += a[i];
    }

    return total;
}

int main(void)
{
    int values[] = {5, 10, 15, 20};
    int n = (int)(sizeof(values) / sizeof(values[0]));

    printf("sum = %d\n", sum(values, n));

    return 0;
}
