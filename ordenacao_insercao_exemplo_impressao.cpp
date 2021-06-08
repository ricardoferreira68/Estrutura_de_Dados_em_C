#include <math.h>
#include <stdio.h>
#define TAM 6
void ordenacao_insercao(int vetor[]){
    int i, j, elemento;
    for (i = 1; i < TAM; i++) {
        elemento = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > elemento) {
            printf("%2i : {", elemento);
            for (int i=0;i<TAM; i++)
                printf("%2i, ", vetor[i]);
            printf("}\n");
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = elemento;
        printf("%2i : {", elemento);
        for (int i=0;i<TAM; i++)
            printf("%2i, ", vetor[i]);
        printf("}\n");
    }
}
int main()
{
    int vetor[] = {8, 13, 1, 3, 5, 2, };
    ordenacao_insercao(vetor);
    printf("{");
    for (int i=0;i<TAM; i++)
        printf("%i, ", vetor[i]);
    printf("}\n");
    return 0;
}