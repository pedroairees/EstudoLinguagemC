#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;
    int primeiro = 0, segundo = 1, proximo;

    printf("Digite um número INTEIRO e POSITIVO, para saber a sequência de Fibonacci!\n");
    printf("Número -->  ");
    scanf("%d", &num);
    if(num < 0){
        system("cls");
        printf("\nTente novamente e coloque um número INTEIRO e POSITIVO!");
    }

    for(int i = 1; i <= num; i++){
        printf("%d ", primeiro);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
        if(primeiro > num){
            break;
        }
    }

    return 0;
}
