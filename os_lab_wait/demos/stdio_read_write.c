#include <stdio.h>

int main(void)
{
    char buffer[20];

    size_t n = fread(buffer, 1, 10, stdin);   // stream version: read up to 10 bytes
    fwrite(buffer, 1, n, stdout);             // write exactly the bytes actually read
    return 0;
}

