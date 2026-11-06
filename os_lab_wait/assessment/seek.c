#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* Open filename and collect bytes from three regions:
   1. seek to 'start' with SEEK_SET; read 19 bytes;
   2. seek forward 'skip' bytes with SEEK_CUR; read 23 bytes;
   3. seek -(50 + skip % 10) from SEEK_END; read 17 bytes.
   Return the sum of the unsigned byte values from all 59 bytes.
   Return -1 on an error. The file is large enough for all regions. */
int seek_triplet(const char *filename, int start, int skip)
{
    /* STUDENT WORK START */
    return -1;
    /* STUDENT WORK END */
}

int main(int argc, char *argv[])
{
    if (argc != 2) { printf("Usage: ./seek data/setNN.txt\n"); return 1; }
    int previous = 53;
    for (int stage = 0; stage < 5; stage++) {
        int start = (previous * 17 + stage * 773) % 25000;
        int skip = 3 + (previous + stage) % 18;
        int result = seek_triplet(argv[1], start, skip);
        if (result < 0) { printf("Seeking failed\n"); return 1; }
        printf("Checkpoint %d: %d\n", stage + 1, result);
        previous = result;
    }
    return 0;
}
