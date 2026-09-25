/*
Purpose: Show the characters and terminating zero byte stored in a C string.

Compile:
    gcc -Wall -Wextra -std=c11 string_bytes.c -o string_bytes

Run:
    ./string_bytes
*/

#include <stdio.h>

int main(void)
{
    char word[] = "hello";

    for (int i = 0; i <= 5; ++i) {
        printf("i=%d char=%d address=%p\n",
               i, (unsigned char)word[i], (void *)&word[i]);
    }

    return 0;
}
