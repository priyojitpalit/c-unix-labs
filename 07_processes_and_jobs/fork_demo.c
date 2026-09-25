/*
Purpose: Create a child process with fork() and display parent/child process IDs.

Compile:
    gcc -Wall -Wextra -std=c11 fork_demo.c -o fork_demo

Run:
    ./fork_demo
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork");
        return 1;
    }

    if (pid == 0) {
        printf("child:  pid=%ld, parent=%ld\n",
               (long)getpid(), (long)getppid());
    } else {
        printf("parent: pid=%ld, child=%ld\n",
               (long)getpid(), (long)pid);
    }

    return 0;
}
