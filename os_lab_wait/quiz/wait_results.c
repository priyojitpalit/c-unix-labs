#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/* The program creates one child for each of four tasks.
   Each child exits normally with a calculated status, shown below.
   The parent must collect ALL four statuses and return their sum.
   Do not assume the order in which the children finish. */
int collect_results(int seed)
{
    /* Complete this function using fork(), _exit(), wait(),
       WIFEXITED() and WEXITSTATUS().
       For task = 0,1,2,3 the child's status is
            (seed * (task + 3) + task * task + 17) % 101.
       On a failure, return -1. */
    return -1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: ./wait_results seed\n");
        return 1;
    }
    int seed = atoi(argv[1]);
    printf("%d\n", collect_results(seed));
    return 0;
}
