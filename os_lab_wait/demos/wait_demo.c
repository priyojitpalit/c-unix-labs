#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
    printf("before fork\n");
    pid_t p = fork();  // returns in both parent and child

    if (p == 0) {  // fork returned 0 here: this is the child
        printf("I am child having id %d\n", getpid());
        printf("My parent's id is %d\n", getppid());
    } else if (p > 0) {  // positive fork result: this is the parent
        wait(NULL);  // parent blocks until one child terminates
        printf("My child's id is %d\n", (int)p);
        printf("I am parent having id %d\n", getpid());
    }

    printf("Common: PID=%d\n", getpid());
    return 0;
}

