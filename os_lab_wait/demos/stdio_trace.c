#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("trace.txt", "w");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }
    fprintf(fp, "hello from stdio\n");
    fclose(fp);
    return 0;
}
