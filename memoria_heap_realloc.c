#include <stdio.h> 
#include <stdlib.h>   
int main() {
    int *vetor; 
    vetor = (int*) malloc(3 * sizeof(int)); 
    printf("\nmalloc()\n");
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    for (int i=0; i<3; i++)
        printf("vetor[%d]=%d\n", i, vetor[i]);

    //calloc() 
    vetor = (int*) realloc(vetor, 4 * sizeof(int)); 
    printf("\nrealloc()\n");
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 100;
    for (int i=0; i<4; i++)
        printf("vetor[%d]=%d\n", i, vetor[i]);
    free(vetor); 
    return (0); 
} 