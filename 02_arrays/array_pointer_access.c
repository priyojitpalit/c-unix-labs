/*
Purpose: Access and modify array elements through a pointer.

Compile:
    gcc -Wall -Wextra -std=c11 array_pointer_access.c -o array_pointer_access

Run:
    ./array_pointer_access
*/

#include <stdio.h>

#define MAX 10

int main(void)
{
    int array[MAX];
    int *parray = array;

    for (int i = 0; i < MAX; ++i) {
        array[i] = i * 10;
    }

    printf("first = %d, second = %d\n", *parray, *(parray + 1));

    for (int i = 0; i < MAX; ++i) {
        *(parray + i) = i * 2;
    }

    for (int i = 0; i < MAX; ++i) {
        printf("array[%d] = %d, *(parray + %d) = %d\n",
               i, array[i], i, *(parray + i));
    }

    return 0;
}
