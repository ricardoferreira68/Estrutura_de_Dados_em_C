#include <stdio.h>
#define LIN 2
#define COL 3
int main(void)
{
    int i, j, E, M[LIN][COL] = {{10, 10, 10}, {10, 10, 10}};
    E = 3;
    for(i=0;i<LIN;i++)
    {
        for(j=0;j<COL;j++)
            printf("%d ", M[i][j]*E);
        printf("\n");
    }
    return(0);
}
