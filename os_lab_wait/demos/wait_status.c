#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
    pid_t p = fork();
    if (p < 0) return 1;
    if (p == 0) exit(7);

    int status;
    pid_t done = wait(&status);
    if (WIFEXITED(status))
        printf("child %d exited with %d\n", (int)done, WEXITSTATUS(status));
    return 0;
}

