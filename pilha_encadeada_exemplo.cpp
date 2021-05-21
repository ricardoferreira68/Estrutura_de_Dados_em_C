/* Implementação da Estrutura Abstrata de Daddos Pilha com Lista Encadeada.
    Programa para exemplificar a codificação de uma estrutura Pilha utilizando o conceito de listas encadeadas.

    Operações sobre uma Pilha (Stack):
    - Criara a pilha;
    - Empilhar um elemento (push);
    - Desempilhar um elemento (pop);
    - Exibir a pilha (exibir);
    - Verificar se a pliha está cheia (cheia); e
    - Verificar se a pilha está vazia (vazia).
*/

#include <stdio.h>
#include <stdlib.h>
struct pilha{
    int dado;
    struct pilha *prox;
};

void push(struct pilha *, int);
int pop(struct pilha *);
void exibir(struct pilha *);
//int cheia(struct pilha *);
//int vazia(struct pilha *);

int main(void)
{
    char opcao, pausa;
    int valor;
    struct pilha paginas;
    paginas.prox = NULL;
    do
    {
        system("clear");
        printf("1. Empilhar (push)\n");
        printf("2. Desempilha (pop)\n");
        printf("3. Exibir\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf(" %c", &opcao);
        switch (opcao)
        {
        case '1': 
            printf("Digite um valor inteiro: ");
            scanf("%d", &valor);
            push(&paginas, valor); 
            break;
        case '2': 
            valor = pop(&paginas);
            printf("Valor desempilhado: %d\n", valor);
            break;
        case '3':
            exibir(&paginas);
        }
        printf("Digire 1 e pressione <Enter>!");
        scanf(" %c", &pausa);
    } while (opcao!='0');   
}

void push(struct pilha *paginas, int valor)
{
    struct pilha *elemento;
    elemento = (struct pilha *) malloc(sizeof(pilha));
    if (elemento == NULL)
        printf("Pilha cheia!\n");
    else
    {
        elemento->dado = valor;
        elemento->prox = paginas->prox;
        paginas->prox = elemento;
    }
}

int pop(struct pilha *paginas)
{
    struct pilha *elemento;
    int valor;
    if (paginas->prox == NULL)
        printf("Pilha vazia.");
    else
    {
        elemento = paginas->prox;
        valor = elemento->dado;
        paginas->prox = elemento->prox;
        free(elemento);
    }
    return valor;
}

void exibir(struct pilha *paginas)
{
    struct pilha *elemento;
    if (paginas->prox == NULL)
        printf("Pilha vazia!\n");
    else
    {
        elemento = paginas->prox;

        while (elemento != NULL)
        {
            printf("%d\n", elemento->dado);
            elemento = elemento->prox;
        }
    }
}
