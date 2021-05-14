#include <stdio.h>
int main(void)
{
    struct cadastro
    {
        char Nome[20];
        char Cidade[20];
        int Ano;
        int Codigo;
    } typedef cadastro;
    cadastro Times[5];
    printf("======================================\n");
    printf(" Federação Estadual de Rugby\n");
    printf("--------------------------------------\n");
    for(int i=0;i<5;i++)
    { 
        printf("Digite o nome do time................: ");
        scanf("%s", &Times[i].Nome);
        printf("Digite a Cidade de Origem do time....: ");
        scanf("%s", &Times[i].Cidade);
        printf("Digite o Ano de Fundação do time.....: ");
        scanf("%d", &Times[i].Ano);
        printf("Digite o Código da Federação Nacinoal: ");
        scanf("%d", &Times[i].Codigo);
        printf("\n");
    }
    printf("========================================\n");
    printf(" Federação Estadual de Rugby\n");
    printf("-----------------------------------------\n");
    printf("Time                 Cidade\n");
    printf("-------------------- --------------------\n");
    for(int i=0;i<5;i++)
        printf("%-20s %-20s\n", Times[i].Nome, Times[i].Cidade);
    printf("-----------------------------------------\n");
    free(Times);
    return 0;
}
