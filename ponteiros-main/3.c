#include <stdio.h>

int main() {
    // Declare duas variáveis inteiras
    int numero1, numero2;

    // Leia os valores do teclado
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    // Obtenha os endereços das variáveis
    int *enderecoNumero1 = &numero1;
    int *enderecoNumero2 = &numero2;

    // Compare os endereços e exiba o conteúdo do maior
    if (enderecoNumero1 > enderecoNumero2) {
        printf("Conteudo do maior endereco: %d\n", *enderecoNumero1);
    } else if (enderecoNumero1 < enderecoNumero2) {
        printf("Conteudo do maior endereco: %d\n", *enderecoNumero2);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
