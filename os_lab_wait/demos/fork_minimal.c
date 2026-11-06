#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("Before fork: one process\n");
    fflush(stdout);                 // send buffered text before duplicating the process

    pid_t p = fork();              // after success, parent and child both continue here
    if (p == -1) {
        perror("fork");
        return 1;
    }

    printf("After fork: this line is executed by both processes\n");
    return 0;
}

