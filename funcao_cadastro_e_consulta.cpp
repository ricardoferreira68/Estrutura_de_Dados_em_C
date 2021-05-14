#include <iostream>
#include <string.h>
#define TAM 3
using namespace std;
typedef struct {
    char nome[30];
    char email[100];
    char fone[9];
} grupo;

void cadastro(grupo *);
void consulta(grupo *);

int main(void)
{
    grupo amigos[TAM];
    cadastro(amigos);
    consulta(amigos);
    return 0;
}

void cadastro(grupo *cad)
{
    for (int i=0; i<TAM; i++)
    {
        cout << "Digite o nome: ";
        cin >> cad[i].nome;
        cout << "Digite o e-mail: ";
        cin >> cad[i].email;
        cout << "Digite o fone: ";
        cin >> cad[i].fone;
    }
}

void consulta(grupo *cad)
{
    char nome[30];
    int posicao = 0;
    cout << "Digite o nome para consultar: ";
    cin >> nome;
    while (posicao < TAM && strcmp(nome, cad[posicao].nome))
    {
        posicao++;
    }
    if (posicao == TAM)
        cout << "Nome não encontrado!" << endl;
    else
        cout << "Fone: " << cad[posicao].fone;
}
