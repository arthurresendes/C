#include <stdio.h>

typedef struct Data
{

    int dia;

    int mes;

    int ano;

} Data;

// Typedef faz voce colocar nome de algo e puxar em outro, Data no final ja puxa em struct

struct aluno
{

    int id;

    Data nascimento;
};

int main()

{

    struct aluno aluno1;

    aluno1.id = 15;

    aluno1.nascimento.ano = 2006;

    aluno1.nascimento.mes = 12;

    aluno1.nascimento.dia = 01;

    printf("Nascido em %d/%d/%d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);

    return 0;
}