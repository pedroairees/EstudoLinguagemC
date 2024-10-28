#include <stdio.h>

int main() {
    // Declare as variáveis
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    // Declare ponteiros para as variáveis
    int *ponteiroInteiro;
    float *ponteiroReal;
    char *ponteiroChar;

    // Associe os ponteiros às variáveis
    ponteiroInteiro = &inteiro;
    ponteiroReal = &real;
    ponteiroChar = &caractere;

    // Imprima os valores iniciais das variáveis
    printf("Valores iniciais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    // Modifique os valores das variáveis usando os ponteiros
    *ponteiroInteiro = 20;
    *ponteiroReal = 6.28;
    *ponteiroChar = 'B';

    // Imprima os valores das variáveis após a modificação
    printf("\nValores após modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    return 0;
}
