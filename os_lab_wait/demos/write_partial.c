#include <unistd.h>

int main(void)
{
    write(STDOUT_FILENO, "hello\n", 3);  // only the first 3 bytes: h e l
    return 0;
}

