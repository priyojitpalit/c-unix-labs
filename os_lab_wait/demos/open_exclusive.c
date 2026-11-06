#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int fd = open("new_only.txt", O_WRONLY | O_CREAT | O_EXCL, 0644);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    write(fd, "created\n", 8);
    close(fd);
    return 0;
}

