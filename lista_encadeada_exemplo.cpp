#include <iostream>
#include <iomanip>
using namespace std;

// Estrutura de cadastro de aluno com matrícula e nota final.
struct cad{
    int matricula;
    float nota_final;
    cad *proximo;
};

// Protótipo das funções.
void cabecalho(void);
int insere(struct cad *);
void le(struct cad *);
void altera(struct cad *);
void exclui(struct cad *);
void exibe(struct cad *);
struct cad * pesquisa(struct cad *);
void pausa(void);

int main(void) 
{
    // Variáveis locais:
    char opcao;  // Usada para escolher um item do menu de opções.

    // Cria a cabeça da lista.
    struct cad aluno;
    aluno.proximo = NULL; // Lista vazia.

    do
    {
        cabecalho();
        cout << " 1. Incluir aluno.  " << endl;
        cout << " 2. Consultar aluno." << endl;
        cout << " 3. Alterar aluno.  " << endl;
        cout << " 4. Excluir aluno.  " << endl;
        cout << " 5. Listar aluno.   " << endl;
        cout << " 0. Sair.           " << endl;
        cout << "--------------------" << endl;
        cout << " Escolha uma opção: ";
        cin >> opcao;
        switch (opcao)
        {
            case '1':
                if (insere(&aluno) == 1)
                    cout << "Erro na inserção!" << endl;
                else
                    cout << "Nó inserido com sucesso!" << endl;
                pausa();
                break;
            case '2':
                le(&aluno);
                pausa();
                break;
            case '3':
                altera(&aluno);
                pausa();
                break;
            case '4':
                exclui(&aluno);
                pausa();
                break;
            case '5':
                exibe(&aluno);
                pausa();
                break;
        }
    } while (opcao != '0');
    system("clear");
    return 0;
}

// Função que monta o cabeçalho da aplicação.
void cabecalho(void)
{
    system("clear");
    cout << "====================" << endl;
    cout << "NOTAS DOS ALUNO     " << endl;
    cout << "--------------------" << endl;
}

// Insere um nó na lista.
int insere(struct cad *cabeca)
{
    // Variável do novo nó.
    struct cad *novo, *nodo;

    // Aloca espaço na memória para o novo nó.
    novo = new cad;
    
    // Verifica se o espaço foi reserado.
    if (novo == NULL)
        return 1;  // Retorna 1 se deu erro na alocação.

    // Verifica se a lista está vazia.
    if (cabeca->proximo == NULL)
        cabeca->proximo = novo;
    else
    {
        // Localiza o último nó da lista.
        nodo = cabeca->proximo;
        while (nodo->proximo != NULL)
            nodo = nodo->proximo;

        // Armazena o endereço do novo nó no ponteiro do
        // último nó localizado na lista.
        nodo->proximo = novo;
    }

    // Atribul NULL para o campo próximo no nó novo.
    novo->proximo = NULL;

    cout << "Digite a nova matrícula: ";
    cin >> novo->matricula;
    cout << "Digite a nota final: ";
    cin >> novo->nota_final;
    return 0;
}

// Consulta um aluno pela matricula.
void le(struct cad *cabeca)
{
    // Variáreis locais auxiliares.
    struct cad *nodo;

    // Verifica se a lista está vazia.
    if (cabeca->proximo == NULL)
        cout << "A lista está vazia." << endl;
    else
    {
        // Pesquisa a matrícula na lista e verifica .
        nodo = pesquisa(cabeca);
        if (nodo == NULL)
            cout << "Matrícula não cadastrada." << endl;
        else
        {
            cout << "Matrícula: " << nodo->matricula << endl;
            cout << "Nota.....: " << nodo->nota_final << endl;
        }
    }
}

// Altera a nota de aluno pela matricula.
void altera(struct cad *cabeca)
{
    // Variáreis locais auxiliares.
    struct cad *nodo;

    // Verifica se a lista está vazia.
    if (cabeca->proximo == NULL)
        cout << "A lista está vazia." << endl;
    else
    {
        // Pesquisa a matrícula na lista e verifica .
        nodo = pesquisa(cabeca);
        if (nodo == NULL)
            cout << "Matrícula não cadastrada." << endl;
        else
        {
            cout << "Matrícula: " << nodo->matricula << endl;
            cout << "Nota.....: " << nodo->nota_final << endl;
            cout << endl;
            cout << "Digite a nova nota: ";
            cin >> nodo->nota_final;
        }
    }
}

// Exclui um aluno pela matricula.
void exclui(struct cad *cabeca)
{
    // Variáreis locais auxiliares.
    struct cad *nodo, *anterior;
    char confirma;

    // Verifica se a lista está vazia.
    if (cabeca->proximo == NULL)
        cout << "A lista está vazia." << endl;
    else
    {
        // Pesquisa a matrícula na lista e verifica .
        nodo = pesquisa(cabeca);
        if (nodo == NULL)
            cout << "Matrícula não cadastrada." << endl;
        else
        {
            cout << "Matrícula: " << nodo->matricula << endl;
            cout << "Nota.....: " << nodo->nota_final << endl;
            cout << endl;
            cout << "Confirma exclusão (S/n)? ";
            cin >> confirma;
            if (confirma != 'S')
                cout << "Exclusão cancelada!" << endl;
            else
            {
                // Verifica se a exclusão é do primeiro nó.
                if (nodo == cabeca->proximo)
                    cabeca->proximo = nodo->proximo;
                else
                {
                    // Localiza o anterior.
                    anterior = cabeca->proximo;
                    while (anterior->proximo != nodo)
                        anterior = anterior->proximo;
                    
                    // Armazena no nó anterior o endereço do próximo nó a ser excluído.   
                    anterior->proximo = nodo->proximo;
                }
                
                // Exclui o nó.
                delete(nodo);

                cout << "Exclusão realizada com sucesso!" << endl;
            }
        }
    }
}

// Lista todo os nós da lista.
void exibe(struct cad *cabeca)
{
    // Variáveis locias auxiliares.
    struct cad *nodo;

    // Exibe a listagem.
    cout << "Matricula Nota" << endl;
    cout << "--------------" << endl;
    // Verifica se a lista está vazia.
    if (cabeca->proximo == NULL)
        cout << "A lista está vazia." << endl;
    else
    {
        nodo = cabeca->proximo;
        while (nodo != NULL)
        {
            cout << setw(5) << nodo->matricula << "    ";
            cout << setw(5.1) << nodo->nota_final << endl;
            nodo = nodo->proximo;
        }
        cout << "--------------" << endl << endl;    
    }
}

struct cad * pesquisa(struct cad *cabeca)
{
    // Variáreis locais auxiliares.
    struct cad *nodo;
    int matricula;

    // Solicita a matrícula para consulta.
    cout << "Digite a matrícula: ";
    cin >> matricula;

    // Pesquisa a matrícula na lista.
    nodo = cabeca->proximo;
    while (nodo != NULL && matricula != nodo->matricula)
        nodo = nodo->proximo;
    
    // Verifica se a matrícula foi encontrada.
    if (nodo != NULL)
        return nodo;
    else
        return NULL;
}


void pausa(void)
{
    char pausa;
    cout << endl;
    cout << "Digite 1 e pressione <Enter>.";
    cin >> pausa;
};
