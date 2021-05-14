 /*FACULDADE ESTÁCIO DE BELÉM
   Exemplificação Vetor de Registros
   Autor: Ricardo Ferreira
*/
#include <stdlib.h>
#include <stdio.h>
#define TAM 3
int main()
{
    typedef struct 
    {
        char descricao[45];
        float preco;
        int qtde;
    } cadastro;

    cadastro produto[10];

    int i;

    system("clear");
    for (i=0;i<TAM;i++) 
    {
        printf("Digite a descrição: ");
        scanf("%s", &produto[i].descricao);
        printf("Digite o preço: ");
        scanf("%f", &produto[i].preco);
        printf("Digite a quantidade: ");
        scanf("%d", &produto[i].qtde);
    }
    getchar();
    for (i=0;i<TAM;i++)
    {
        system("clear");
        printf("=================================\n");
        printf("LOJA VIRTUAL\n");
        printf("---------------------------------\n");
        printf("Produto: %-45s\n", produto[i].descricao);
        printf("Preço..: %7.2f\n", produto[i].preco);
        printf("Qtde...: %03d\n", produto[i].qtde);
        printf("=================================\n");
        getchar();
    }
}
