#include <stdio.h>

int main(void)
{
    char buffer[11] = {0};
    FILE *fp = fopen("test.txt", "r");       // "r" corresponds to read-only stream access
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    size_t n = fread(buffer, 1, 10, fp);      // read up to 10 bytes from the stream
    fwrite(buffer, 1, n, stdout);             // show the bytes that were read
    fputc('\n', stdout);

    fclose(fp);                               // stream-level close
    return 0;
}

