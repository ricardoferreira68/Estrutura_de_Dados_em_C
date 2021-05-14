#include <iostream>
using namespace std;
int main(void) {
    int qtde;
    cout << "*** NOTAS DOS ALUNOS *** " << endl;
    cout << "Quantos alunos? ";
    cin >> qtde;
    float *alunos = new double[qtde];
    cout << "\nTamanho de um double: " << sizeof(double) << "\n\n";
    for (int i=0; i<qtde; i++) {
        cout << "Qual a nota do aluno #" << i + 1 << " : ";
        cin >> *(alunos + i);
    }
    for (int i=0; i<qtde; i++)
        cout << "Aluno #" << i + 1 << " nota = "<< *(alunos + i) << endl;
    delete alunos;
    return 0;
}
