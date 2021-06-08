#include <math.h>
#include <stdio.h>
#define TAM 6
void ordenacao_selecao(int vetor[]) 
{ 
  int i, j, min, aux;
  for (i = 0; i < (TAM-1); i++) 
   {
    min = i;
    for (j = (i+1); j < TAM; j++) {
        printf("%2i : {", min);
        for (int i=0;i<TAM; i++)
            printf("%2i, ", vetor[i]);
        printf("}\n");
      if(vetor[j] < vetor[min]) {
        min = j;
      }
    }
    printf("%2i : {", min);
    for (int i=0;i<TAM; i++)
        printf("%2i, ", vetor[i]);
    printf("}\n");
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
}
int main()
{
    int vetor[] = {8, 13, 1, 3, 5, 2, };
    ordenacao_selecao(vetor);
    printf("{");
    for (int i=0;i<TAM; i++)
        printf("%i, ", vetor[i]);
    printf("}\n");
    return 0;
}