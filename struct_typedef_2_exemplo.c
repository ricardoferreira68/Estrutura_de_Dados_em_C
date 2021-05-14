#include <stdio.h>
int main(void)
{
    typedef struct pontos
    {
        int a;
        int b;
    } 
    struct pontos ponto = {2, 4};
    printf("ponto y(%d, %d)\n", ponto.a, ponto.b);
    return(0);
}
