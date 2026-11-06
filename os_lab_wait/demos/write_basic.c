#include <unistd.h>

int main(void)
{
    write(STDOUT_FILENO, "hello\n", 6);  // fd 1: write bytes to standard output
    return 0;
}

