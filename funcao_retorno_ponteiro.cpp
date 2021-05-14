#include <iostream>
using namespace std;
char * setName();
int main (void)
{
    char* str = setName(); 	//ponteiros para a função
    cout << str; 	        //imprimo o valor do ponteiro?
    return 0;
}
char* setName (void)
{
    static char name[80];             // vetor criado na pilha, o mesmo deixará de existir quando 
                                // a função acabar.
    cout << "Enter your name: ";
    cin.getline (name, 80);
    return name;              // E aqui temos o erro... o vetor name não poderá ser lido 
                             // quando a função retornar , logo pode gerar um erro em 
                             // tempo de execução.
}
