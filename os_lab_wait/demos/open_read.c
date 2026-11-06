#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char buffer[50];
    int fd = open("test.txt", O_RDONLY);  // open returns a file descriptor, or -1
    if (fd == -1) {
        perror("open");
        return 1;
    }

    printf("File descriptor: %d\n", fd);
    ssize_t n = read(fd, buffer, 10);  // return value says how many bytes were read
    if (n > 0)
        write(STDOUT_FILENO, buffer, (size_t)n);  // fd 1: write bytes to standard output
    write(STDOUT_FILENO, "\n", 1);  // fd 1: write bytes to standard output
    close(fd);  // release this descriptor when finished
    return 0;
}

