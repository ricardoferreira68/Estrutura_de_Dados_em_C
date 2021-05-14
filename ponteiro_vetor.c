#include <stdio.h>
int main (void) 
{
  int vetor[3];
  *vetor = 10;
  *(vetor+1) = 20;
  *(vetor+2) = 30;
  for(int i=0; i<3; i++) 
    printf("vetor[%d] = %d\n", i+1, *(vetor+i));
}