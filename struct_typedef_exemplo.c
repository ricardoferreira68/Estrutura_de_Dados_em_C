#include <stdio.h>
int main(void)
{
    struct 
    {
        int a;
        int b;
    } typedef pontos;
    pontos ponto = {2, 4};
    printf("ponto y(%d, %d)\n", ponto.a, ponto.b);
    return(0);
}
