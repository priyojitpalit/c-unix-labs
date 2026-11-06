#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    char buffer[6] = {0};
    int fd = open("seeking", O_RDONLY);
    if (fd == -1) return 1;

    read(fd, buffer, 5);                  // current position is now 5
    lseek(fd, -2, SEEK_CUR);              // move back to position 3
    ssize_t n = read(fd, buffer, 5);
    if (n > 0) write(STDOUT_FILENO, buffer, (size_t)n);
    write(STDOUT_FILENO, "\n", 1);
    close(fd);
    return 0;
}

