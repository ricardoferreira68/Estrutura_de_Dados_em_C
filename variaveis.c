#include <stdio.h>
int main(void)
{
    char nome[30];
    int idade;
    float salario;
    char sexo;

    printf("Digite um nome: ");
    scanf("%s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite o sexo: ");
    scanf(" %c", &sexo);

    printf("\n*DADOS DIGITADOS *\n");
    printf("-----------------\n");
    printf("Nome...: %s\n", nome);
    printf("Idade..: %d\n", idade);
    printf("Salario: %.2f\n", salario);
    printf("Sexo...: %c\n", sexo);
    return(0);
}
