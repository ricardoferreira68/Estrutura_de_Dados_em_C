#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int main(void)
{
    struct remedio
    {
        char Desc[20];
        char Comp[20];
        char Aplic[20];
        char Classe[20];
    };
    remedio *lab;
    int i = 0;
    lab = (remedio *) malloc(sizeof(remedio));
    cout << "Digite o remédio (Fim p/ Sair): ";
    cin >> lab[i].Desc;
    while (strcmp(lab[i].Desc, "Fim")) 
    {        
        cout << "Digite o Componente Ativo: ";
        cin >> lab[i].Comp;
        cout << "Digite a Aplicação: ";
        cin >> lab[i].Aplic;
        cout << "Digite a Classificação: ";
        cin >> lab[i].Classe;
        i++; //i += 1; //i <-- i + 1
        lab = (remedio *) realloc(lab, sizeof(remedio)*(i+1));
        cout << endl << "Digite o remédio (Fim p/ Sair): ";
        cin >> lab[i].Desc;
    }
    cout << "--------------------------------------------------------------" << endl;
    cout << "*** LABORATÓRIO CENTRAL ***" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "Descrição            Componente Ativo     Classificação" << endl;
    cout << "-------------------- -------------------- --------------------" << endl;
    for (int j=0;j<i;j++)
    {
        cout << left;
        cout << setw(21) << lab[j].Desc;
        cout << setw(21) << lab[j].Comp;
        cout << setw(20) << lab[j].Classe << endl; 
    }
    cout << "--------------------------------------------------------------" << endl;
    free(lab);
    return 0;
}
