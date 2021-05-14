/* Criar um programa de controle de alunos de uma instituição, em que os alunos
    possuem várias informações: matrícula, nome, endereço, data de nascimento,
    curso, nota e frequência. O programa deve permitir a inclusão de alunos e
    ao final do cadastro devem ser listados todos os alunos cadastrados.
    
    Entrada: matrícula, nome, endereço, data de nascimento, curso, nota e frequência.
    Processamento: incluir alunos.
    Saída: listagem de todos os alunos cadastrados.

    Comandos:
    1. Entrada de dados - Leia
    2. Antribuição - <--
    3. Decisão - Se
    4. Repetição - Laço - Para / Enquanto
    5. Saída da informação - Escreva 

    typedef struct {
        char logr[30];
        char nume[10]; //22  1.281   34A 54C  28Altos
        char cida[30];
    } reg_end;
    typedef struct {
        int dia;
        int mes;
        int ano;
    } reg_dat;
    typedef struct {
        int matr;
        char nome[30];
        reg_end ende;
        reg_dat dt_n;
        int curs;
        float nota;
        int freq;
    } reg_aluno;

    reg_aluno alunos[1000];
    int qtde = 0;
    Leia(alunos[qtde].matr)
    Enquanto (alunos[qtde].matr <> 0) Faça
        
        Leia(alunos[qtde].nome)
        Leia(alunos[qtde].ende.logr)
        Leia(alunos[qtde].ende.nume)
        Leia(alunos[qtde].ende.cida)
        Leia(alunos[qtde].dt_n.dia)
        Leia(alunos[qtde].dt_n.mes)
        Leia(alunos[qtde].dt_n.ano)
        Leia(alunos[qtde].curs)
        Leia(alunos[qtde].nota)
        Leia(alunos[qtde].freq)
        qtde = qtde + 1;
        Leia(alunos[qtde].matr)
    Fim Enquanto
    Para i <-- 0 até qtde Faça
        Escreva(alunos[i].nome)
    Fim Para
    
*/
#include <stdio.h>
int main(void)
{
    typedef struct {
        char logr[30];
        char nume[10]; //22  1.281   34A 54C  28Altos
        char cida[30];
    } reg_end;
    typedef struct {
        int dia;
        int mes;
        int ano;
    } reg_dat;
    typedef struct {
        int matr;
        char nome[30];
        reg_end ende;
        reg_dat dt_n;
        int curs;
        float nota;
        int freq;
    } reg_aluno;

    reg_aluno alunos[1000];
    int qtde = 0;
    printf("====================\n");
    printf("SISTEMA ESCOLAR\n");
    printf("Módulo de Cadastro de Aluno\n");
    printf("-----------------------------------------\n");
    /*
    ----------------------
    O que você deseja:
    1. para incluir
    2. para consultar
    3. para alterar
    4. para excluir
    0. para sair 
    ----------------------
    Qual a sua opção?
    scanf(" %d", op);
    switch (op)
    {
    case 1:
        inclusao();
        break;
    case 2:
        consulta();
        break;
    case 3:
        alteracao();
        break;
    case 4:
        exclusao();
        break;
    
    default:
        break;
    }
    */

    printf("Digite a matrícula do aluno (0 p/ sair): ");
    scanf("%d", &alunos[qtde].matr);
    while(alunos[qtde].matr != 0) 
    {        
        printf("Digite o nome do auno: ");
        scanf("%s", &alunos[qtde].nome);
        printf("Digite o logradouro: ");
        scanf("%s", &alunos[qtde].ende.logr);
        printf("Digite o número do endereço: ");
        scanf("%s", &alunos[qtde].ende.nume);
        printf("Digite a cidade: ");
        scanf("%s", &alunos[qtde].ende.cida);
        printf("Data de Nascimento: ");
        printf("Digite o dia: ");
        scanf("%d", &alunos[qtde].dt_n.dia);
        printf("Digite o mês: ");
        scanf("%d", &alunos[qtde].dt_n.mes);
        printf("Digite o ano: ");
        scanf("%d", &alunos[qtde].dt_n.ano);
        printf("Digite o curso do auno: ");
        scanf("%d", &alunos[qtde].curs);
        printf("Digite a nota do auno: ");
        scanf("%f", &alunos[qtde].nota);
        printf("Digite a frequência do auno: ");
        scanf("%d", &alunos[qtde].freq);
        qtde++;
        printf("Digite a matrícula do aluno (0 p/ sair): ");
        scanf("%d", &alunos[qtde].matr);
    }
    printf("========================================\n\n\n");
    for (int i=0; i<qtde; i++)
        printf("Aluno: %s\n", alunos[i].nome);
    return 0;
}
