#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* Copy exactly length bytes beginning at absolute offset start
   from source to combined.bin. On the first call (append == 0),
   create/truncate combined.bin. On later calls (append == 1), add
   the bytes at the end without removing existing contents.
   Return bytes written, or -1 on failure. Use the supplied
   create mode 0644 when using O_CREAT; no permission arithmetic is tested.
   The source file has enough bytes for every requested range. */
int copy_slice(const char *source, int start, int length, int append)
{
    /* STUDENT WORK START */
    return -1;
    /* STUDENT WORK END */
}

/* Provided verifier: sum of all bytes currently in combined.bin. */
int checksum_output(void)
{
    int fd = open("combined.bin", O_RDONLY);
    if (fd == -1) return -1;
    unsigned char buffer[512];
    int sum = 0;
    ssize_t n;
    while ((n = read(fd, buffer, sizeof buffer)) > 0)
        for (ssize_t i = 0; i < n; i++) sum += buffer[i];
    close(fd);
    return n < 0 ? -1 : sum;
}

int main(int argc, char *argv[])
{
    if (argc != 2) { printf("Usage: ./append data/setNN.txt\n"); return 1; }
    int previous = 31;
    for (int stage = 0; stage < 5; stage++) {
        int start = (previous * 11 + stage * 1301 + 55) % 25000;
        int length = 170 + stage * 20;
        if (copy_slice(argv[1], start, length, stage != 0) != length) {
            printf("File operation failed\n"); return 1;
        }
        int sum = checksum_output();
        if (sum < 0) return 1;
        printf("Checkpoint %d: %d\n", stage + 1, sum);
        previous = sum;  /* Each new source offset depends on this result. */
    }
    return 0;
}
