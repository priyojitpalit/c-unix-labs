#include <stdio.h>

int main(void)
{
    char text[6] = {0};
    FILE *fp = fopen("stdio_rdwr_demo.txt", "r+");
    if (fp == NULL) return 1;

    fread(text, 1, 5, fp);
    printf("Read: %s\n", text);

    fseek(fp, 0, SEEK_CUR);               // required transition before writing to an update stream
    fwrite("XYZ", 1, 3, fp);
    fclose(fp);
    return 0;
}

