#include <stdio.h>
#include <stdlib.h>
#include "tracker.h"

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: ./tracker threshold\n");
        return 1;
    }
    int threshold = atoi(argv[1]);
    int value;
    int total = 0;
    FILE *fp = fopen("samples.txt", "r");
    if (fp == NULL) {
        printf("Cannot open samples.txt\n");
        return 1;
    }
    while (fscanf(fp, "%d", &value) == 1) {
        if (accept(value, threshold)) {
            total += adjustment(value);
        }
    }
    fclose(fp);
    printf("Result: %d\n", total);
    return 0;
}
