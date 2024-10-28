#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1, num2;

    printf("Esse programa ira fazer a conta que desejar com os 2 numeros que informar!");
    printf("\nNumero 1: ");
    scanf("%d", &num1);
    printf("\nNumero 2: ");
    scanf("%d", &num2);

    //resultados variaveis
    int soma = num1 + num2;
    int subtracao =  num1 - num2;
    int multiplicacao = num1 * num2;
    float divisao =  (num1 / (float)num2);

    //resultados
    system("cls");
    printf("Soma --> %d + %d = %d", num1, num2, soma);
    printf("\nSubtracao --> %d - %d = %d", num1, num2, subtracao);
    printf("\nMultiplicao --> %d x %d = %d", num1, num2, multiplicacao);
    printf("\nDivisao --> %d / %d = %.1f", num1, num2, divisao);

    return 0;
}
