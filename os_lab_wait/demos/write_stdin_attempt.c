#include <stdio.h>   // perror(), printf()
#include <unistd.h>  // write(), STDIN_FILENO

int main(void)
{
    const char message[] = "trying to write through descriptor 0\n";

    // STDIN_FILENO is only the symbolic name for descriptor 0.
    // Whether writing succeeds depends on what descriptor 0 currently refers to.
    ssize_t n = write(STDIN_FILENO, message, sizeof message - 1);

    if (n == -1) {
        perror("write to descriptor 0");
        return 1;
    }

    printf("write returned %zd\n", n);
    return 0;
}

