#include <stdio.h>

int main() {
    float vetor[5];

    // Lê os valores do vetor
    printf("Digite 5 valores reais:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%f", &vetor[i]);
    }

    int codigo;
    printf("Digite um código (0 para finalizar, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    // Verifica o código e executa a ação correspondente
    switch (codigo) {
        case 0:
            printf("Programa finalizado.\n");
            break;
        case 1:
            printf("Vetor na ordem direta:\n");
            for (int i = 0; i < 5; ++i) {
                printf("%f\n", vetor[i]);
            }
            break;
        case 2:
            printf("Vetor na ordem inversa:\n");
            for (int i = 4; i >= 0; --i) {
                printf("%f\n", vetor[i]);
            }
            break;
        default:
            printf("Código inválido.\n");
            break;
    }

    return 0;
}
