#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char buffer[50];
    int in = open("test.txt", O_RDONLY);  // open returns a file descriptor, or -1
    if (in == -1) { perror("open input"); return 1; }

    ssize_t n = read(in, buffer, 10);  // return value says how many bytes were read
    int out = open("towrite.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);  // open returns a file descriptor, or -1
    if (out == -1) { perror("open output"); close(in); return 1; }

    if (n > 0)
        write(out, buffer, (size_t)n);

    close(in);  // release this descriptor when finished
    close(out);  // release this descriptor when finished
    return 0;
}

