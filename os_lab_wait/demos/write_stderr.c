#include <unistd.h>

int main(void)
{
    write(STDERR_FILENO, "problem\n", 8);  // fd 2: standard error
    return 0;
}

