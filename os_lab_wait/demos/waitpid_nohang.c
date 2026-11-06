#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
    pid_t p = fork();
    if (p < 0) return 1;
    if (p == 0) { sleep(2); _exit(0); }

    pid_t result = waitpid(p, NULL, WNOHANG);  // return immediately
    printf("first check returned %d\n", (int)result);  // usually 0: still running

    result = waitpid(p, NULL, 0);              // now wait normally
    printf("blocking wait returned %d\n", (int)result);
    return 0;
}

