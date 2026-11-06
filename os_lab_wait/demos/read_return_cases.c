#include <stdio.h>   // perror()
#include <unistd.h>  // read(), write()

int main(void)
{
    char buffer[16];
    ssize_t n = read(STDIN_FILENO, buffer, sizeof buffer);

    if (n > 0) {
        // Positive: n bytes were actually read.
        write(STDOUT_FILENO, buffer, (size_t)n);
    } else if (n == 0) {
        // Zero: end-of-file; this is not an error.
        write(STDOUT_FILENO, "EOF\n", 4);
    } else {
        // Negative: the read failed and errno describes the reason.
        perror("read");
        return 1;
    }

    return 0;
}

