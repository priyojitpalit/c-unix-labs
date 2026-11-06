#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Provided child calculation. Each child reads a different part of
   its assigned file. Output is suitable as a normal exit status. */
int task_status(const char *filename, int base, int task)
{
    int fd = open(filename, O_RDONLY);
    if (fd == -1) return 120;
    int start = (base * 37 + task * 371) % 25000;
    unsigned char bytes[47];
    if (lseek(fd, start, SEEK_SET) == -1) { close(fd); return 120; }
    ssize_t n = read(fd, bytes, sizeof bytes);
    close(fd);
    if (n != (ssize_t)sizeof bytes) return 120;
    int sum = 0;
    for (int i = 0; i < 47; i++) sum += bytes[i] * (i % 4 + 1);
    return (sum + task * 13 + base) % 97;
}

/* Create exactly FIVE child processes. Child i must call
   _exit(task_status(filename,base,i)). The parent must wait for
   every child with waitpid(child_pid,&status,0), check WIFEXITED,
   add WEXITSTATUS(status) to the total, and return that total.
   Do not depend on the order in which children finish.
   Return -1 for a fork or wait error. */
int collect_children(const char *filename, int base)
{
    /* STUDENT WORK START */
    return -1;
    /* STUDENT WORK END */
}

int main(int argc, char *argv[])
{
    if (argc != 2) { printf("Usage: ./wait data/setNN.txt\n"); return 1; }
    int previous = 41;
    for (int stage = 0; stage < 5; stage++) {
        int base = (previous * 13 + stage * 71) % 5000;
        int result = collect_children(argv[1], base);
        if (result < 0) { printf("wait task failed\n"); return 1; }
        printf("Checkpoint %d: %d\n", stage + 1, result);
        previous = result;
    }
    return 0;
}
