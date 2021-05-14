/* Criar um programa de controle de alunos em uma instituição, em que os alunos
   possuem várias informações: matrícula, nome, endereco, data de nascimento, 
   curso, nota e frequencia. */
#include <stdio.h>
#include <string.h>
int main(void){
    //Definição da estrutura 'endereco_tipo'.
    typedef struct {
        char logradouro[30];
        char numero[10];
        char cep[8];
        char bairro[20];
        char cidade[30];
        char uf[2];
    } endereco_tipo;
    //Definição do nome ‘reg_aluno’ para a estrutura.
    typedef struct {
        char matricula[12];
        char nome[30];
        endereco_tipo endereco;
        char dt_nasc[8];
        char curso[4];
        float nota;
        int falta;
    } reg_aluno;
    //Variável declarada com o tipo redefinido.
    reg_aluno aluno;
    strcpy(aluno.endereco.bairro, "Umarizal");
    aluno.falta = 31;
    printf("Qtde de faltas é %d\n", aluno.falta);
    printf("O bairro é %s\n", aluno.endereco.bairro);
    return(0);
}
