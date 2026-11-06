#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
    printf("Before fork: PID=%d\n", getpid());

    pid_t p = fork();  // returns in both parent and child
    if (p < 0) {
        perror("fork");
        return 1;
    }

    if (p == 0) {  // fork returned 0 here: this is the child
        printf("Child: PID=%d PPID=%d fork-return=%d\n",
               getpid(), getppid(), (int)p);
    } else {
        printf("Parent: PID=%d child-PID=%d\n", getpid(), (int)p);
    }

    return 0;
}

