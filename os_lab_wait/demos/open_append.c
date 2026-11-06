#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = open("log.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd == -1) return 1;

    write(fd, "one more line\n", 14);  // O_APPEND places each write at the end
    close(fd);
    return 0;
}

