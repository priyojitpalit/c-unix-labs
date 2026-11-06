#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    char buffer[4];
    int fd = open("seeking", O_RDONLY);
    if (fd == -1) return 1;

    lseek(fd, -3, SEEK_END);              // start three bytes before the end
    ssize_t n = read(fd, buffer, 3);
    if (n > 0) write(STDOUT_FILENO, buffer, (size_t)n);
    write(STDOUT_FILENO, "\n", 1);
    close(fd);
    return 0;
}

