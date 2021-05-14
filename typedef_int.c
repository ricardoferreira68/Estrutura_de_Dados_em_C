#include <stdio.h>
int main(void)
{
    //Redefinição do tipo int como inteiro.
    typedef int inteiro;

    //Variável declarada com o tipo redefinido.
    inteiro idade = 19;

    printf("A idade é %d\n", idade);
    printf("O endereço de memória da variável idade é %p\n", &idade);
    return(0);
}
