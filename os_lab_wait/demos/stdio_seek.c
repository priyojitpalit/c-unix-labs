#include <stdio.h>

int main(void)
{
    char buffer[11] = {0};
    FILE *fp = fopen("seeking", "r");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    if (fseek(fp, 10, SEEK_SET) != 0) {       // stream-level seek from file beginning
        perror("fseek");
        fclose(fp);
        return 1;
    }

    long pos = ftell(fp);                     // ask the stream for its current position
    printf("Position is now %ld\n", pos);
    size_t n = fread(buffer, 1, 10, fp);
    fwrite(buffer, 1, n, stdout);
    fputc('\n', stdout);

    fclose(fp);
    return 0;
}

