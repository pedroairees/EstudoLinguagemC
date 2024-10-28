#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double num;
    printf("Número: ");
    scanf("%lf", &num);

    if(num < 5){
        printf("\nSeu número é menor do que 5!");
    } else if(num == 5){
        printf("\nSeu número é 5!");
    } else if(num >= 5 && num < 200){
        printf("\nSeu número está entre 5 e 200!");
    } else if(num == 200){
        printf("\nSeu número é 200!");
    } else if(num > 200 && num < 400){
        printf("\nSeu número está entre 200 e 400!");
    } else if(num == 400){
        printf("Seu número é 400!");
    } else if(num >= 500 && num < 1000){
        printf("\nSeu número está entre 500 e 1000!");
    } else {
        printf("\nSeu número está fora dos escopos!");
    }

    return 0;
}
