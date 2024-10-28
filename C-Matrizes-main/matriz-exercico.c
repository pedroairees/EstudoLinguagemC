#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define BIMESTRE_ANUAIS 4
#define NUMERO_DE_ALUNOS 4

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float notaAlunos[NUMERO_DE_ALUNOS][BIMESTRE_ANUAIS] = {0};
    float mediasAlunos[NUMERO_DE_ALUNOS] = {0};
    float media = 0;

    printf("Insira as notas dos aluno:\n");
    for(int aluno = 0; aluno < NUMERO_DE_ALUNOS; aluno++){
        printf("Aluno %d\n", aluno + 1);
        for(int notas = 0;  notas < BIMESTRE_ANUAIS; notas++){
            printf("Bimestre %d >>  ", notas + 1);
            scanf("%f", &notaAlunos[aluno][notas]);
            media += notaAlunos[aluno][notas];
        }
        mediasAlunos[aluno] = media / BIMESTRE_ANUAIS;
        media = 0;
    }

    system("cls");

    for(int aluno = 0; aluno < NUMERO_DE_ALUNOS; aluno++){
        printf("\nAluno %d", aluno + 1);
        for(int notas = 0; notas < BIMESTRE_ANUAIS; notas++){
            printf("\nBimestre %d >>> %.1f", notas + 1, notaAlunos[aluno][notas]);
        }
        printf("\nMédia >>> %.1f", mediasAlunos[aluno]);
    }

    return 0;
}
