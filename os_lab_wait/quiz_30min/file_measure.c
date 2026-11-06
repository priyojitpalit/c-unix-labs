#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/* Read exactly count bytes beginning at byte offset start in filename.
   Return the weighted sum of the bytes. The first byte has weight 1,
   the second has weight 2, the third has weight 3, and the weights
   then repeat 1, 2, 3.

   Use open(), lseek(), read(), and close().
   Return -1 if opening, seeking, or reading fails.
   The supplied ranges are within the file. */
int measure(const char *filename, int start, int count)
{
    /* Complete this function. */
    return -1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: ./file_measure data/setNN.txt\n");
        return 1;
    }

    int previous = 17;
    for (int stage = 0; stage < 7; stage++) {
        int start = (previous * 19 + stage * 503 + 121) % 28000;
        int count = 50 + stage * 9;
        int result = measure(argv[1], start, count);
        if (result < 0) {
            printf("File operation failed\n");
            return 1;
        }
        printf("Checkpoint %d: %d\n", stage + 1, result);
        previous = result;
    }
    return 0;
}
