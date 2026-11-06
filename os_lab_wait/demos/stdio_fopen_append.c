#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("stdio_modes.txt", "a");  // create if needed; otherwise append
    if (fp == NULL) return 1;
    fprintf(fp, "appended\n");
    fclose(fp);
    return 0;
}

