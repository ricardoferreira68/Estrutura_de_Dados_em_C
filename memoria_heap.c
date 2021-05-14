#include <stdio.h>
#include <stdlib.h>
// Função Principal.
int main(void)
{
    char *curso;
    curso = (char *) malloc(30*sizeof(char));

    printf("Digite a descrição do curso: ");
    scanf("%s", curso);
    printf("\nCurso = %s\n", curso);
    return 0;
}
