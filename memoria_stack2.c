#include <stdio.h>
// Variáveis Estáticas - Globais.
float altura = 1.65;

// Função de cálculo do IMC.
float imc(void) { 
    float imc;
    imc=peso/(altura*altura);
    return imc;
}

// Início do Programa - Função Principal.
int main(void)
{ 
    float peso = 52.3;
    printf("   altura = %5.2f\n", altura);
    printf("     peso = %4.1f\n", peso);
    printf("IMC(Fem.) = %4.1f\n", imc(peso));
    return 0;
}
