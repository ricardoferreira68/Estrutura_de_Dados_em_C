#include <math.h> 
#include <stdio.h>
#define TAM 6
void ordenacao_bolha(int vetor[]) {
    int i, j, aux;
    for(i=TAM-1; i >= 1; i--) {
        for(j=0; j < i ; j++) {
            if(vetor[j]>vetor[j+1]) {
                 aux = vetor[j];
                 vetor[j] = vetor[j+1];
                 vetor[j+1] = aux;
            }
        }
    }
}
int main()
{
    int vetor[] = {8, 13, 1, 3, 5, 2, };
    ordenacao_bolha(vetor);
    printf("{");
    for (int i=0;i<TAM; i++)
        printf("%i, ", vetor[i]);
    printf("}\n");
    return 0;
}