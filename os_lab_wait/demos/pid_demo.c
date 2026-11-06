#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("My PID  = %d\n", (int)getpid());
    printf("My PPID = %d\n", (int)getppid());
    return 0;
}
