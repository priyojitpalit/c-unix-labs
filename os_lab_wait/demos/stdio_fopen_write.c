#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("stdio_modes.txt", "w");  // create or truncate
    if (fp == NULL) return 1;
    fprintf(fp, "first\n");
    fclose(fp);
    return 0;
}

