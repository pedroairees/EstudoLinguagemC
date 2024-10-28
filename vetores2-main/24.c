#include <stdio.h>

int main() {
    int numeroAluno;
    float alturaAluno;
    int alunoMaisBaixo, alunoMaisAlto;
    float alturaMaisBaixa = 999.0; // Valor inicial alto para garantir que seja substituído
    float alturaMaisAlta = 0.0;    // Valor inicial baixo para garantir que seja substituído

    for (int i = 0; i < 10; ++i) {
        // Lê o número e a altura do aluno
        printf("Digite o número do aluno e a altura (em metros) separados por espaço: ");
        scanf("%d %f", &numeroAluno, &alturaAluno);

        // Verifica se é o aluno mais baixo
        if (alturaAluno < alturaMaisBaixa) {
            alturaMaisBaixa = alturaAluno;
            alunoMaisBaixo = numeroAluno;
        }

        // Verifica se é o aluno mais alto
        if (alturaAluno > alturaMaisAlta) {
            alturaMaisAlta = alturaAluno;
            alunoMaisAlto = numeroAluno;
        }
    }

    // Imprime o número e a altura do aluno mais baixo e mais alto
    printf("\nAluno mais baixo:\n");
    printf("Número do aluno: %d\n", alunoMaisBaixo);
    printf("Altura: %.2f metros\n", alturaMaisBaixa);

    printf("\nAluno mais alto:\n");
    printf("Número do aluno: %d\n", alunoMaisAlto);
    printf("Altura: %.2f metros\n", alturaMaisAlta);

    return 0;
}
