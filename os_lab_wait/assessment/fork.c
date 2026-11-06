#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Provided calculation, always executed on the assigned dataset. */
int score_segment(const char *filename, int start)
{
    int fd = open(filename, O_RDONLY);
    if (fd == -1) return -1;
    unsigned char buffer[91];
    if (lseek(fd, start, SEEK_SET) == -1) { close(fd); return -1; }
    ssize_t n = read(fd, buffer, sizeof buffer);
    close(fd);
    if (n != (ssize_t)sizeof buffer) return -1;
    int result = 0;
    for (int i = 0; i < 91; i++)
        result += (int)buffer[i] * (i % 5 + 1);
    return (result + 3 * start) % 10007;
}

/* Create a child process with fork(). The child computes
   score_segment(filename,start) and writes its binary int value to
   fork_result.bin with open(), write(), and close(); then _exit(0).
   The parent waits for this child using wait() or waitpid(), reads that integer from the file,
   and returns it. Do not try to share an ordinary local variable
   directly between parent and child. Return -1 on errors. */
int fork_task(const char *filename, int start)
{
    /* STUDENT WORK START */
    return -1;
    /* STUDENT WORK END */
}

int main(int argc, char *argv[])
{
    if (argc != 2) { printf("Usage: ./fork data/setNN.txt\n"); return 1; }
    int previous = 29;
    for (int stage = 0; stage < 5; stage++) {
        int start = (previous * 31 + stage * 421) % 25000;
        int value = fork_task(argv[1], start);
        if (value < 0) { printf("fork task failed\n"); return 1; }
        printf("Checkpoint %d: %d\n", stage + 1, value);
        previous = value;
    }
    return 0;
}
