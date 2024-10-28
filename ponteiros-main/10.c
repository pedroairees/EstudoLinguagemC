#include <stdio.h>

int main() {
    // Declare um array de inteiros com 5 elementos
    int array[5];

    // Use um ponteiro para percorrer o array
    int *ptr = array;

    // Leia os valores do teclado e imprima o dobro
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", ptr + i);  // Utilize aritmética de ponteiros para acessar cada posição do array
    }

    // Imprima o dobro de cada valor lido
    printf("\nO dobro de cada valor lido:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *(ptr + i) * 2);  // Utilize aritmética de ponteiros para acessar cada valor do array
    }

    return 0;
}
