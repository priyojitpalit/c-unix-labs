#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* Return how many times 'letter' occurs in the entire input file.
   Use open(), read(), and close(). Read repeatedly until end-of-file.
   Return -1 if opening or reading fails. */
int count_letter(const char *filename, char letter)
{
    /* STUDENT WORK START */
    return -1;
    /* STUDENT WORK END */
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: ./scan data/setNN.txt\n");
        return 1;
    }
    int previous = 17;
    for (int stage = 0; stage < 5; stage++) {
        char letter = 'A' + (previous * 7 + stage * 9) % 26;
        int count = count_letter(argv[1], letter);
        if (count < 0) { perror("count_letter"); return 1; }
        printf("Checkpoint %d: %d\n", stage + 1, count);
        previous = count;  /* Next letter depends on this result. */
    }
    return 0;
}
