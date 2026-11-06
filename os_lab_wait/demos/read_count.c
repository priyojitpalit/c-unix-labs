#include <unistd.h>

int main(void)
{
    char buffer[20];
    ssize_t nread = read(STDIN_FILENO, buffer, 10);  // fd 0: read bytes from standard input
    if (nread > 0)
        write(STDOUT_FILENO, buffer, (size_t)nread);  // fd 1: write bytes to standard output
    return 0;
}

