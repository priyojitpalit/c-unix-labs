/*
Purpose: Access structure members through a pointer using both (*p).member and p->member.

Compile:
    gcc -Wall -Wextra -std=c11 structure_pointer.c -o structure_pointer

Run:
    ./structure_pointer
*/

#include <stdio.h>

struct point {
    int x;
    int y;
};

int main(void)
{
    struct point pt;
    struct point *pp;

    pt.x = 10;
    pt.y = 20;

    pp = &pt;

    printf("using (*pp): x=%d, y=%d\n", (*pp).x, (*pp).y);
    printf("using pp-> : x=%d, y=%d\n", pp->x, pp->y);

    return 0;
}
