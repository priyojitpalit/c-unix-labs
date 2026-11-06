#include <stdio.h>

int main(void)
{
    char buffer[4] = {0};
    FILE *fp = fopen("seeking", "r");
    if (fp == NULL) return 1;

    fseek(fp, -3, SEEK_END);
    fread(buffer, 1, 3, fp);
    printf("%s\n", buffer);
    fclose(fp);
    return 0;
}

