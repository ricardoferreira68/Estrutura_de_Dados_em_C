#include <stdio.h>

int main(void)
{
    //Estrutura com o conjunto de dados de um estado da guilhotina.
    struct guilhotina_sensores
    {
        char cod[2];
        float s01;
        int s02;
        short s03;
    } sensores; //Variável para a estrutura.

    //Ponteiro para manipular o arquivo na memória secundária.
    FILE *arq;
    char arquivo[] = "guilhotina01_dados.dat"; //Nome do arquivo de dados gravado em disco.

    //Abre o arquivo de dados dos sensores no modo acréscimo.
    arq = fopen(arquivo, "a+");
    //Verifica se houve erro na abertura do arquivo.
    if (arq == NULL)
        printf("Erro na abertura do arquivo.\n");
    else
    {
        //Rotina para incluir dados dos sensores da guilhotina.
        printf("Digite o valor do sensor s01 (comprimento em centímetro): ");
        scanf("%f", &sensores.s01);
        while (sensores.s01 != 0)
        {
            printf("Digite o valor do sensor s02 (pressão em psi): ");
            scanf("%d", &sensores.s02);
            printf("Digite o valor do sensor s02 (fibra presente: 1-sim / 0-não): ");
            scanf("%d", &sensores.s03);
            fwrite(arq, sizeof(sensores), 1, sensores);
            printf("Digite o valor do sensor s01 (comprimento em centímetro): ");
            scanf("%f", &sensores.s01);
        }
        fclose(arq);
    }
    return 0;
}
