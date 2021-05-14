#include <stdio.h>
int main(void)
{
    struct coord
    {
        int a;
        int b;
    } ponto = {2, 4};
    printf("ponto y(%d, %d)\n", ponto.a, ponto.b);
    return(0);
}
