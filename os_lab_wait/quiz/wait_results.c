#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/* One task reads part of the supplied input file and computes a status.
   This helper is complete; do not modify it. */
static int task_status(int seed, int task)
{
    int fd = open("samples.txt", O_RDONLY);
    if (fd == -1) return 127;

    int position = 300 + (seed * 97 + task * 431) % 21000;
    if (lseek(fd, position, SEEK_SET) == -1) {
        close(fd);
        return 127;
    }

    unsigned char block[48];
    ssize_t n = read(fd, block, sizeof block);
    close(fd);
    if (n != (ssize_t)sizeof block) return 127;

    int total = 0;
    for (int j = 0; j < 48; j++) total += block[j];
    return (total + task * 7 + seed) % 101;
}

/* Create eight child processes, one for each task 0 through 7.
   Child task i must exit with status task_status(seed, i).
   The parent waits for ALL eight children and returns the sum of
   their normal exit statuses. Do not assume any completion order.
   Return -1 on a fork or wait error. */
int collect_results(int seed)
{
    /* Complete this function with fork, _exit, wait, WIFEXITED,
       and WEXITSTATUS. The helper above does not need editing. */
    return -1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: ./wait_results seed\n");
        return 1;
    }
    int seed = atoi(argv[1]);
    printf("%d\n", collect_results(seed));
    return 0;
}
