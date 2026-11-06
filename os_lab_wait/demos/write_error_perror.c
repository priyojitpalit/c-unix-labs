#include <stdio.h>   // perror()
#include <unistd.h>  // write()

int main(void)
{
    // Descriptor 99 is deliberately invalid in this demo.
    ssize_t n = write(99, "hello\n", 6);

    if (n == -1) {
        // perror() prints our label, then the message for the current errno value.
        perror("write");
        return 1;
    }

    return 0;
}

