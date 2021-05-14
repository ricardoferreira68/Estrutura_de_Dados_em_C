#include <stdio.h> 
#include <stdlib.h>   
int main()
{ 
    int *vetor; 
    vetor = (int*) malloc(3 * sizeof(int)); 
    printf("\nmalloc()\n");
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    for (int i=0; i<3; i++)
        printf("vetor[%d]=%d\n", i, vetor[i]);
    free(vetor); 

    //calloc() 
    vetor = (int*) calloc(3, sizeof(int)); 
    printf("\ncalloc()\n");
    vetor[0] = 100;
    vetor[1] = 200;
    vetor[2] = 300;
    for (int i=0; i<3; i++)
        printf("vetor[%d]=%d\n", i, vetor[i]);
    free(vetor); 
    return (0); 
} 