#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int idade;
    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("\nVoc� � menor de 18 anos, portanto n�o pode beber bebidas alcoolicas!");
    } else {
        printf("\nVoc� � maior de 18 anos, aproveite!");
    }

    return 0;
}
