#include <stdio.h>

int main(void)
{
    // stdout and stderr are different FILE * streams even though both
    // usually appear in the same terminal at first.
    fprintf(stdout, "normal output\n");
    fprintf(stderr, "error output\n");
    return 0;
}

