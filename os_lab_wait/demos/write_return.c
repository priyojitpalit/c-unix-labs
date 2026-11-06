#include <stdio.h>
#include <unistd.h>

int main(void)
{
    ssize_t count = write(STDOUT_FILENO, "hello\n", 6);  // fd 1: write bytes to standard output
    printf("Total bytes written: %zd\n", count);
    return 0;
}

