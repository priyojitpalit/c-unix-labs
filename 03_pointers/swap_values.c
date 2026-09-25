/*
Purpose: Compare passing integers by value with modifying integers through pointers.

Compile:
    gcc -Wall -Wextra -std=c11 swap_values.c -o swap_values

Run:
    ./swap_values
*/

#include <stdio.h>

void swap_by_value(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap_with_pointers(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a = 2;
    int b = 3;

    swap_by_value(a, b);
    printf("after swap_by_value: a=%d, b=%d\n", a, b);

    swap_with_pointers(&a, &b);
    printf("after swap_with_pointers: a=%d, b=%d\n", a, b);

    return 0;
}
