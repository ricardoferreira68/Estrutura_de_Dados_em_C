#include <iostream>
using namespace std;
void imprime_vetor(int *);
int main(void)
{
    int v[9] = {1, 1, 2, 3, 5, 8, 13, 21, 34, };
    imprime_vetor(v);
    return 0;
}

void imprime_vetor(int *Vetor)
{
    cout <<"{";
    for (int i=0;i<9;i++)
        cout <<*(Vetor+i)<<", ";
    cout <<"}"<< endl;
}
