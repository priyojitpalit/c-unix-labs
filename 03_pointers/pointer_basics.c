/*
Purpose: Compare ordinary integer values, addresses, and pointer dereferencing.

Compile:
    gcc -Wall -Wextra -std=c11 pointer_basics.c -o pointer_basics

Run:
    ./pointer_basics
*/

#include <stdio.h>

int main(void)
{
    int a = 1000;
    int b = 2000;

    int *pa = &a;
    int *pb = &b;

    printf("a = %d, *pa = %d\n", a, *pa);
    printf("b = %d, *pb = %d\n", b, *pb);

    printf("&a = %p, pa = %p\n", (void *)&a, (void *)pa);
    printf("&b = %p, pb = %p\n", (void *)&b, (void *)pb);

    return 0;
}
