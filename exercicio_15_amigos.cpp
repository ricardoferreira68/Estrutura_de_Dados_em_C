/*
    Programa para cadastrar os dados de 15 amigos.
    Deve permitir a consulta do telefone de um amigo pelo nome.
    Os dados de cada amigo são: nome, email, fone

    Raciocínio Lógico
        constante TAM 3
        struct cad {
            char nome[30];
            char email[100];
            char fone[11];
        } amigo[TAM];
        Para i <-- 1 até TAM faça
            Leia(amigo[i].nome)
            Leia(amigo[i].email)
            Leia(amigo[i].fone)
        Fim Para
        Escreva("Qual o nome a ser pesquisado: ")
        Leia(nome_pesquisa)
        i <-- 0
        Enquanto i<TAM && nome_pesquisa <> amigo[i].nome Faça
            i++;
        Fim Enquanto
        se i<TAM Então
            Escreva(amigo[i].fone)
        senão
            Escreva("Nome não encontrado no cadastro.")
        Fim Se
    Fim do Raciocínio
*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define TAM 15 
using namespace std;
typedef struct {
    char nome[30];
    char email[100];
    char fone[11];
} cad;
cad amigo[TAM];
int qtde=0;

void cadastro_de_amigos(void);
void pesquisa_nome(void);
void listagem(void);

int main(void)
{
    char op;
    do
    {
        system("clear");
        cout << "==========================" << endl;
        cout << "   *AGENDA DOS AMIGO *" << endl;
        cout << "--------------------------" << endl;
        cout << " 1 - Incluir amigo na agenda" << endl;
        cout << " 2 - Pesquisar um amigo" << endl;
        cout << " 3 - Listagem da agenda" << endl;
        cout << " 0 - Fechar janela" << endl;
        cout << "--------------------------" << endl;
        cout << " Qual a sua opção? ";
        cin >> op;
        switch (op)
        {
        case '1':
            cadastro_de_amigos();
            break;   
        case '2':
            pesquisa_nome();
            break;   
        case '3':
            listagem();
            break;   
        }
    } while (op != '0');
    
    return 0;
}

void cadastro_de_amigos()
{ 
    char letra;
    system("clear");
    cout << "AGENDO DOS AMIGOS" << endl;
    cout << "-----------------------------"<< endl;
    if (qtde==TAM)
    { 
        cout << "Desculpe! Agenda lotada." << endl;
        cin >> letra;
    }
    else
    {
        cout << "Digite o " << qtde+1 << "o. nome: ";
        cin >> amigo[qtde].nome;
        cout << "Digite o email: ";
        cin >> amigo[qtde].email;
        cout << "Digite o fone: ";
        cin >> amigo[qtde].fone;
        qtde++;
    }
}

void pesquisa_nome()
{  
    char nome_pesquisa[30];
    char letra;
    int i;
    system("clear");
    cout << "-----------------------------"<< endl;
    cout << "Qual o nome a ser pesquisado: ";
    cin >> nome_pesquisa;
    i = 0;
    while (i<TAM && strcmp(nome_pesquisa, amigo[i].nome))
        i++;
    if (i<TAM)
        cout << "Fone: " << amigo[i].fone << endl;
    else
        cout << "Nome não encontrado no cadastro." << endl;
    cin >> letra;
}

void listagem(void)
{
    char letra;
    int i;
    system("clear");
    cout << "==========================" << endl;
    cout << "   *AGENDA DOS AMIGO *" << endl;
    cout << "--------------------------" << endl;
    cout << "NOME      EMAIL     FONE" << endl;
    for (i=0;i<qtde;i++)
    { 
        cout << amigo[i].nome << " ";
        cout << amigo[i].email << " ";
        cout << amigo[i].fone << endl;
    }    
    cout << "==========================" << endl;
    cin >> letra;
}