#include <stdio.h>
#include <unistd.h>

int main(void)
{
    ssize_t count = write(3, "hello\n", 6);  // returns bytes written, or -1 on error
    printf("write() returned: %zd\n", count);
    return 0;
}

