#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    char buffer[6] = {0};
    int fd = open("rdwr_demo.txt", O_RDWR);  // one descriptor permits both reading and writing
    if (fd == -1) return 1;

    ssize_t n = read(fd, buffer, 5);     // read the first 5 bytes
    if (n > 0)
        write(STDOUT_FILENO, buffer, (size_t)n);
    write(STDOUT_FILENO, "\n", 1);

    write(fd, "XYZ", 3);                // continues from the current file position
    close(fd);
    return 0;
}

