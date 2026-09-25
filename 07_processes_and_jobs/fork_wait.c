/*
Purpose: Create a child process and use wait() so the parent waits for the child to finish.

Compile:
    gcc -Wall -Wextra -std=c11 fork_wait.c -o fork_wait

Run:
    ./fork_wait
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork");
        return 1;
    }

    if (pid == 0) {
        printf("child starting\n");
        sleep(3);
        printf("child finished\n");
    } else {
        wait(NULL);
        printf("parent continues after child exits\n");
    }

    return 0;
}
