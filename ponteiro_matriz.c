#include <stdio.h>
void soma(int Num1, int Num2, int *Num3)
{
    int total;
    total = Num1 + Num2;
    *Num3 = total; 
}

int main(void)
{
    int Num1, Num2, Num3;
    Num1 = 4;
    Num2 = 5;
    soma(Num1, Num2, &Num3);
    printf("A soma é %d\n", Num3);
    return(0);
}
