#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;
    int primeiro = 0, segundo = 1, proximo;

    printf("Digite um n�mero INTEIRO e POSITIVO, para saber a sequ�ncia de Fibonacci!\n");
    printf("N�mero -->  ");
    scanf("%d", &num);
    if(num < 0){
        system("cls");
        printf("\nTente novamente e coloque um n�mero INTEIRO e POSITIVO!");
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
