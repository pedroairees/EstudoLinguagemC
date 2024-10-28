#include <stdio.h>

int main() {
    // Declare duas variáveis inteiras
    int numero1 = 10;
    int numero2 = 20;

    // Obtenha os endereços das variáveis
    int *enderecoNumero1 = &numero1;
    int *enderecoNumero2 = &numero2;

    // Compare os endereços e exiba o maior
    if (enderecoNumero1 > enderecoNumero2) {
        printf("O endereço de numero1 é maior: %p\n", (void *)enderecoNumero1);
    } else if (enderecoNumero1 < enderecoNumero2) {
        printf("O endereço de numero2 é maior: %p\n", (void *)enderecoNumero2);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
