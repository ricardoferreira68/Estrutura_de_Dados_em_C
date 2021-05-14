#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    struct Cadastro
    {
        char Nome[20];
        char Cidade[30];
        int Ano;
        int Codigo;
    };
    Cadastro Times[5];
    for(int i=0; i<=4; i++)
    {
        cout << "Digite o nome do time: ";
        cin >> Times[i].Nome;
        cout << "Digite a cidade do time: ";
        cin >> Times[i].Cidade;
        cout << "Digite o ano de fundação do time: ";
        cin >> Times[i].Ano;
        cout << "Digite o código do time: ";
        cin >> Times[i].Codigo;
        cout << endl;
    }
    cout << "---------------------------------------------------" << endl;
    cout << "Time                 Cidade" << endl;
    cout << "-------------------- ------------------------------" << endl;
    for(int i=0; i<=4; i++)
    {
        cout << left;
        cout << setw(21) << Times[i].Nome;
        cout << setw(30) << Times[i].Cidade << endl;
    }
    cout << "---------------------------------------------------" << endl;
    return 0;
}
