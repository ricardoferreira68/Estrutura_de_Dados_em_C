#include <iostream>  // Uso de cin e cout.
#include <string.h>  // Uso de strcmp no laço.
#include <iomanip>  // Formatação da saída cout.
using namespace std;  // Define std com saída padrão para cout.

struct dt_date {  // Estrutura de dados para armazenar data.
    int dia;
    int mes;
    int ano;
};

struct cad {  // Estrutura de dados de cadastro do paciente.
    char nome[20];
    char fone[11];
    dt_date dt_nasc;
};

// Função Principal - Início da execução do programa.
int main(void) {
    int qtde=0;
    cad *pacientes;  // Declara um ponteiro do tipo cad.
    pacientes = new cad[30];  // Instancia o vetor cad[30].
    cout << "*** Consultório Médico *** " << endl;
    cout << endl;
    cout << "Digite o nome do paciente (Fim p/ sair): ";
    cin >> pacientes[qtde].nome;
    while( strcmp(pacientes[qtde].nome, "Fim") && qtde<30)         
    {
        cout << "Digite o telefone: ";
        cin >> pacientes[qtde].fone;
        cout << "Data de nascimento: " << endl; 
        cout << "Digite o Dia: ";
        cin >> pacientes[qtde].dt_nasc.dia;
        cout << "Digite o Mês: ";
        cin >> pacientes[qtde].dt_nasc.mes;
        cout << "Digite o Ano: ";
        cin >> pacientes[qtde].dt_nasc.ano;
        cout << endl;
        qtde++;
        cout << "Digite o nome do paciente (Fim p/ sair): ";
        cin >> pacientes[qtde].nome;
    }
    cout << "*** Consultório Médico *** " << endl;
    cout << "===========================================" << endl;
    cout << "Nome                 Telefone    Data Nasc." << endl;
    cout << "-------------------- ----------- ----------" << endl;
    for (int i=0; i<qtde; i++)
    {
        cout << left;
        cout.fill(' ');
        cout << setw(21) << pacientes[i].nome;
        cout << setw(12) << pacientes[i].fone;
        cout << right;
        cout.fill('0');
        cout << setw(2) << pacientes[i].dt_nasc.dia << "/";
        cout << setw(2) << pacientes[i].dt_nasc.mes << "/";
        cout << setw(4) << pacientes[i].dt_nasc.ano << endl;
    }
    cout << "===========================================" << endl;
    delete pacientes;
    return 0;
}
