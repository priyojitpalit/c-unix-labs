#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    char buffer[10];
    int fd = open("seeking", O_RDONLY);  // open returns a file descriptor, or -1
    if (fd == -1) return 1;

    read(fd, buffer, 10);
    write(STDOUT_FILENO, buffer, 10);  // fd 1: write bytes to standard output
    write(STDOUT_FILENO, "\n", 1);  // fd 1: write bytes to standard output

    lseek(fd, 5, SEEK_CUR);  // move relative to the current file offset
    read(fd, buffer, 10);
    write(STDOUT_FILENO, buffer, 10);  // fd 1: write bytes to standard output
    write(STDOUT_FILENO, "\n", 1);  // fd 1: write bytes to standard output

    close(fd);  // release this descriptor when finished
    return 0;
}

