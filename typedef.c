#include <stdio.h>
int main(void)
{
    //Redefinição do tipo int como inteiro.
    typedef int inteiro;

    //Variável declarada com o tipo redefinido.
    inteiro idade = 19;

    printf("A idade é %d\n", idade);
    return(0);
}
