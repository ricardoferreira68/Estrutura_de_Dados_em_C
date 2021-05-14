#include <stdio.h>
int main (void)
{
    int x, *p;
    x = 100;
    p = &x;
    printf("%d\n", *p);
}

