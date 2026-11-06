#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) return 1;

    printf("fileno(fp) = %d\n", fileno(fp));  // reveal the descriptor used by this stream
    fclose(fp);
    return 0;
}

