#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
    pid_t first = fork();
    if (first == 0) { sleep(1); _exit(0); }
    if (first < 0) return 1;

    pid_t second = fork();
    if (second == 0) { sleep(2); _exit(0); }
    if (second < 0) return 1;

    waitpid(second, NULL, 0);             // explicitly wait for the second child
    printf("second child %d finished\n", (int)second);
    waitpid(first, NULL, 0);              // reap the first child too
    return 0;
}

