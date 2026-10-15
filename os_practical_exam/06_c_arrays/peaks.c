#include <stdio.h>
#include <stdlib.h>

/* Count positions i (1 <= i < n-1) satisfying ALL conditions:
   values[i] > values[i-1]
   values[i] > values[i+1]
   values[i] > threshold

   Return the count. The first and last elements cannot be peaks.
   Read elements using the pointer parameter values. */
int count_peaks(const int *values, int n, int threshold)
{
    /* Write the function body here. */
    return -1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: ./peaks threshold\n");
        return 1;
    }
    int values[1200];
    for (int i = 0; i < 1200; i++) {
        values[i] = (i * 37 + 11) % 101;
    }
    int threshold = atoi(argv[1]);
    printf("%d\n", count_peaks(values, 1200, threshold));
    return 0;
}
