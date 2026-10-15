#include <stdio.h>
#include <stdlib.h>

struct Reading {
    int id;
    int value;
    int enabled;
};

/* Return the SUM of the value field of every record for which:
   enabled == 1
   value >= low
   value <= high

   Each line in the input file has: id value enabled
   Read all records from the file using fscanf. Return -1 if
   the file cannot be opened. */
int sum_selected(const char *filename, int low, int high)
{
    /* Write the function body here. */
    return -1;
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Usage: ./analyze lower upper\n");
        return 1;
    }
    int low = atoi(argv[1]);
    int high = atoi(argv[2]);
    printf("%d\n", sum_selected("readings.txt", low, high));
    return 0;
}
