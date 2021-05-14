/* Criar um programa de controle de alunos em uma instituição, em que os alunos
   possuem várias informações: matrícula, nome, endereco, data de nascimento, 
   curso, nota e frequencia. */
#include <stdio.h>
int main(void){
    //Definição do nome ‘reg_aluno’ para a estrutura.
    typedef struct {
        char matricula[12];
        char nome[30];
        char endereco[40];
        char dt_nasc[8];
        char curso[4];
        float nota;
        int falta;
    } reg_aluno;
    //Variável declarada com o tipo nomeado.
    reg_aluno aluno;
    aluno.falta = 31;
    printf("Qtde de faltas é %d\n", aluno.falta);
    return(0);
}
