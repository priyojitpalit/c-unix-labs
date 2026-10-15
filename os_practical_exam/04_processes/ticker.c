#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Usage: ./ticker letter repetitions\n");
        return 1;
    }
    char letter = argv[1][0];
    int repetitions = atoi(argv[2]);
    for (int i = 0; i < repetitions; i++) {
        printf("%c\n", letter);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}
