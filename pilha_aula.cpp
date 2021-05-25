/* 
    Programa que implementa uma pilha dinânica.
    Usada para exemplificar a programação de pilha dinâmica com funções push e pop.

    - Função para empilhar - push(pilha, valor)
    - Função para desempilhar - valor = pop(pilha)
    - Função para listar a plilha.
    - A rotina de pilha vazia ficará dentro da função pop.
    - A rotina de pilha cheia ficará dentra da função push.
    - A rotina para criar a pilha, ficará no início do programa.
*/
#include <iostream>
using namespace std;

void push(struct tipo_pilha *, int);
int pop(struct tipo_pilha *);
void lista(struct tipo_pilha *);
int vazia(struct tipo_pilha *);

struct tipo_pilha
{
    int dado;
    struct tipo_pilha *prox;
};

int main(void)
{
    char opcao, pausa;
    int valor;

    // Criar a pilha.
    struct tipo_pilha pilha;
    pilha.prox = NULL;
    
    do
    {
        system("clear");
        cout << "---------------------\n";
        cout << "1. Empilhar (push)" << endl;
        cout << "2. Desempilhar (pop)" << endl;
        cout << "3. Listar" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opço: ";
        cin >> opcao;
        switch (opcao)
        {
        case '1':
            cout << "Digite um valor: ";
            cin >> valor;
            push(&pilha, valor);
            break;
        case '2':
            if (vazia(&pilha))
                cout << "Pilha vazia" << endl;
            else
            {
                valor = pop(&pilha);
                cout << "Elemento = " << valor;
                cout << " desempilhado!" << endl;
            }
            break;
        case '3':
            lista(&pilha);
            break;
        }
        cout << "Digite 1 e pressione <enter> para continuar.";
        cin >> pausa;
    } while (opcao != '0');
    return 0;
}

void push(struct tipo_pilha *ptr_pilha, int dado)
{
    struct tipo_pilha *elemento;
    elemento = new tipo_pilha;
    if (elemento == NULL)
        cout << "Pilha cheia!" << endl;
    else
    {
        elemento->dado = dado;
        elemento->prox = ptr_pilha->prox;
        ptr_pilha->prox = elemento;
        cout << "Empilhado!" << endl;
    }
}

int pop(struct tipo_pilha *ptr_pilha)
{
    struct tipo_pilha *elemento;
    int dado;
    elemento = ptr_pilha->prox;
    dado = elemento->dado;
    ptr_pilha->prox = elemento->prox;
    delete elemento;
    return dado;
}

void lista(struct tipo_pilha *ptr_pilha)
{
    struct tipo_pilha *elemento;
    if (vazia(ptr_pilha))
        cout << "Pilha vazia!" << endl;
    else
    {
        elemento = ptr_pilha->prox;
        while (elemento != NULL)
        {
            cout << elemento->dado << endl;
            elemento = elemento->prox;
        }
    }
}

int vazia(struct tipo_pilha *ptr_pilha)
{
    if (ptr_pilha->prox == NULL)
        return 1;
    else
        return 0;
}