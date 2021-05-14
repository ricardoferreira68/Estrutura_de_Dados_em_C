/* Este programa permite a inclusão, consulta, alteração e esclusão de registros 
    de alunos de uma escola.
    Cada registro contém uma estrutura de acordo com a definição a seguir:
    typedef struct {
        int matricula;
        char nome[30];
        float nota;
    } cadastro;
*/
#include <iostream>
#include <string.h>
using namespace std;

struct cadastro {
    int matricula;
    char nome[30];
    float nota;
} aluno[1000];
int qtde = 0;

void inclusao(void);
void consulta(void);
void alteracao(void);
void exclusao(void);
void listagem(void);
void cabecalho(void);
int pesquisa(int);
void pausa(void);


int main(void)
{
    int opcao;
    do 
    {
        cabecalho();
        cout << "1. Inlclusão" << endl;
        cout << "2. Consulta" << endl;
        cout << "3. Alteração" << endl;
        cout << "4. Exclusão" << endl;
        cout << "5. Listagem" << endl;
        cout << "0. Sair" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        switch (opcao)
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
        case 5:
            listagem();
            break;
        }
    }while(opcao!=0);
}

void cabecalho(void)
{
    system("clear");
    cout << "======================================" << endl;
    cout << "ESCOLA MELHOR DO MUNDO" << endl;
    cout << "SISTEMA ACADEMICO" << endl;
    cout << "--------------------------------------" << endl;
}

int pesquisa(int matr_pesq)
{
    int i = 0;
    while (i<qtde && matr_pesq != aluno[i].matricula)
        i++;
    if (i == qtde)
        return -1;
    else
        return i;
}


void pausa(void){
    char pausa;
    scanf(" %c", &pausa);
}


void inclusao(void)
{
    cabecalho();
    cout << endl << "Rotina de inclusão de aluno " << endl << endl;
    cout << "Digite a matrícula do aluno: ";
    cin >> aluno[qtde].matricula;
    cout << "Digite o nome do aluno: ";
    cin >> aluno[qtde].nome;
    cout << "Digite a nota do aluno: ";
    cin >> aluno[qtde++].nota;
}

void consulta(void)
{
    int matr_consuta, posicao;
    cabecalho();
    cout << "Rotina de consulta de aluno por matrícula" << endl << endl; 
    cout << "Digita a matrícula para consulta: ";
    cin >> matr_consuta;
    posicao = pesquisa(matr_consuta);
    if (posicao == -1)
        cout << "Nenhum aluno cadastrado com a matricula informada!";
    else
    {
        cout << "Maticula: " << aluno[posicao].matricula << endl;
        cout << "Nome....: " << aluno[posicao].nome << endl;
        cout << "Nota....: " << aluno[posicao].nota << endl;
    }
    pausa();
}

void alteracao(void)
{
    int matr_alteracao, posicao;
    cabecalho();
    cout << "Rotina de alteração de aluno por matrícula" << endl << endl; 
    cout << "Digita a matrícula para alterar: ";
    cin >> matr_alteracao;
    posicao = pesquisa(matr_alteracao);
    if (posicao == -1)
        cout << "Nenhum aluno cadastrado com a matricula informada!";
    else
    {
        cout << "Maticula: " << aluno[posicao].matricula << endl;
        cout << "Nome....: " << aluno[posicao].nome << endl;
        cout << "Nota....: " << aluno[posicao].nota << endl;
        cout << endl;   
        cout << "Digite o novo nome: ";
        cin >> aluno[posicao].nome;
        cout << "Digite a nova nota: ";
        cin >> aluno[posicao].nota;
        cout << endl;   
        cout << "Alteração realizada com sucesso!";
    }
    pausa();
}

void exclusao(void)
{
    int matr_exclusao, posicao, i;
    char confirmacao;
    cabecalho();
    cout << "Rotina de exclusão de aluno por matrícula" << endl << endl; 
    cout << "Digita a matrícula para exlcuir: ";
    cin >> matr_exclusao;
    posicao = pesquisa(matr_exclusao);
    if (posicao == -1)
        cout << "Nenhum aluno cadastrado com a matricula informada!";
    else
    {
        cout << "Maticula: " << aluno[posicao].matricula << endl;
        cout << "Nome....: " << aluno[posicao].nome << endl;
        cout << "Nota....: " << aluno[posicao].nota << endl;
        cout << endl;   
        cout << "Confirma a exclusão (S/n)? ";
        cin >> confirmacao;
        if (confirmacao == 'S')
        {
            for (i = posicao; i<qtde; i++)
            {
                aluno[i].matricula = aluno[i+1].matricula;
                strcpy(aluno[i].nome, aluno[i+1].nome);
                aluno[i].nota = aluno[i+1].nota;
            }
            qtde--;
            cout << endl;   
            cout << "Exclusão realizada com sucesso!";
        }
        else
            cout << "Exclusão cancelada!";
    }
    pausa();
}

void listagem(void)
{
    int i;
    cabecalho();
    cout << "MATRÍCULA NOME      NOTA" << endl;
    cout << "------------------------" << endl;
    for (i=0;i<qtde;i++)
    {
        cout << aluno[i].matricula << "         ";
        cout << aluno[i].nome << " ";
        cout << aluno[i].nota << endl;
    }
    pausa();
}
