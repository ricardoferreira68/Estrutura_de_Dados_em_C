/*
    Programa que use uma função para imprimir o conteúdo de 
    um vetor. A manipulação do vetor deve ser feita por meio
    da aritmética de ponteiros (não deve ser usado o acesso
    via notação de índice do vetor.)
    Foi dado o vetor v[9] ={1, 1, 2, 3, 5, 8, 13, 21, 34, }
    Lógica
        void imprime_vetor(vetor)
            Para i <-- 1 até 9 Faça
                Escreva(*(vetor+1))
            Fim Para
        Fim Função
        Programa impressao_de_vetor
            inteiro v[9] ={1, 1, 2, 3, 5, 8, 13, 21, 34, }
                           0  1  2  3  4  5   6   7   8
            imprime_vetor(v)
        Fim
*/
#include <iostream>
using namespace std;
void imprime_vetor(int *vetor)
{
    cout << "{";
    for (int i=0;i<9;i++)
        cout << *(vetor+i) << ", "; 
    cout << "}" << endl;
}

int main(void)
{
    int v[9] ={1, 1, 2, 3, 5, 8, 13, 21, 34, };
    imprime_vetor(v);
    return 0;
}
