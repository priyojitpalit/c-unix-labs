#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/* Return the sum of ASCII byte values of count bytes, starting at
   absolute offset start in samples.txt.  If a system call fails,
   return -1.  The supplied test ranges are within the file. */
int window_sum(int start, int count)
{
    /* Complete this function using open, lseek, read and close. */
    return -1;
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Usage: ./window_sum start count\n");
        return 1;
    }
    int start = atoi(argv[1]);
    int count = atoi(argv[2]);
    printf("%d\n", window_sum(start, count));
    return 0;
}
