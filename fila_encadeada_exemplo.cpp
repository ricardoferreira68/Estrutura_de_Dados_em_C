/*  Programa que implementa uma FILA dinânica.
    Usado para exemplificar a programação de fila dinâmica.

    - Criar a Fila (criar);
    - Enfileirar um elemento (enfileirar);
    - Desenfileirar um elemento (desenfileirar);
    - Exibir a Fila (exibir);
    - Verificar se a Fila está vazia (vazia);
    - Verificar se a Fila está cheia (cheia); e
    - Exibir o tamanho da Filha (tamanho).
*/
#include <iostream>
using namespace std;

struct t_fila
{
    int dado;
    struct t_fila *prox;
};

void enfileirar(t_fila *, int);
int desenfileirar(t_fila *);
void exibir(t_fila *);
int vazia(t_fila *);

int main(void)
{
    char opcao, pausa;
    int valor;

    // Criar a Fila (cabeça).
    struct t_fila minha_fila;
    minha_fila.prox = NULL;
    
    do
    {
        system("clear");
        cout << "---------------------\n";
        cout << "1. Enfileirar" << endl;
        cout << "2. Desenfileirar" << endl;
        cout << "3. Listar" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opço: ";
        cin >> opcao;
        switch (opcao)
        {
        case '1':
            cout << "Digite um valor: ";
            cin >> valor;
            enfileirar(&minha_fila, valor);
            break;
        case '2':
            if (vazia(&minha_fila))
                cout << "Fila vazia" << endl;
            else
            {
                valor = desenfileirar(&minha_fila);
                cout << "Elemento = " << valor;
                cout << " Desenfileirado!" << endl;
            }
            break;
        case '3':
            exibir(&minha_fila);
            break;
        }
        cout << "Digite 1 e pressione <enter> para continuar.";
        cin >> pausa;
    } while (opcao != '0');
    return 0;
}

void enfileirar(struct t_fila *ptr_fila, int dado)
{
    struct t_fila *elemento, *ultimo;
    elemento = new t_fila;
    if (elemento == NULL)
        cout << "Fila cheia!" << endl;
    else
    {
        if (vazia(ptr_fila))
        { 
            cout << "Novo\n";
            ptr_fila->prox = elemento;
        }
        else
        {
            cout << "segundo\n";
            ultimo = ptr_fila->prox;
            cout << "cabeça\n";
            while (ultimo->prox != NULL)
                ultimo = ultimo->prox;
            cout << "proximo\n";
            ultimo->prox = elemento;
        }
        elemento->dado = dado;
        elemento->prox = NULL;
        cout << "Emfileirado!" << endl;
        cout << elemento->dado << endl;
    }
}

int desenfileirar(struct t_fila *ptr_fila)
{
    struct t_fila *elemento;
    int dado;
    elemento = ptr_fila->prox;
    dado = elemento->dado;
    ptr_fila->prox = elemento->prox;
    delete elemento;
    return dado;
}

void exibir(struct t_fila *ptr_fila)
{
    struct t_fila *elemento;
    if (vazia(ptr_fila))
        cout << "Fila vazia!" << endl;
    else
    {
        elemento = ptr_fila->prox;
        while (elemento != NULL)
        {
            cout << elemento->dado << endl;
            elemento = elemento->prox;
        }
    }
}

int vazia(struct t_fila *ptr_fila)
{
    if (ptr_fila->prox == NULL)
        return 1;
    else
        return 0;
}
