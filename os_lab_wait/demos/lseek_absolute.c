#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char buffer[10];
    int fd = open("seeking", O_RDONLY);  // open returns a file descriptor, or -1
    if (fd == -1) return 1;

    off_t pos = lseek(fd, 10, SEEK_SET);  // set offset relative to the file beginning
    printf("Offset is now %lld\n", (long long)pos);

    read(fd, buffer, 10);
    write(STDOUT_FILENO, buffer, 10);  // fd 1: write bytes to standard output
    write(STDOUT_FILENO, "\n", 1);  // fd 1: write bytes to standard output

    close(fd);  // release this descriptor when finished
    return 0;
}

