#include <stdio.h>

int main(void)
{
    char buffer[6] = {0};
    FILE *fp = fopen("seeking", "r");
    if (fp == NULL) return 1;

    fread(buffer, 1, 5, fp);             // stream position becomes 5
    fseek(fp, 2, SEEK_CUR);              // move forward two more bytes
    fread(buffer, 1, 5, fp);
    fwrite(buffer, 1, 5, stdout);
    fputc('\n', stdout);
    fclose(fp);
    return 0;
}

