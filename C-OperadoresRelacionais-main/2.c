#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float salario;
    printf("Sal�rio: ");
    scanf("%f", &salario);

    if(salario <= 1799){
        printf("\nVoc� ganha um sal�rio menor que o sal�rio m�nimo!");
    } else if(salario == 1800){
        printf("\nVoc� ganha um sal�rio m�nimo!");
    } else {
        printf("\nVoc� ganha um salario maior que o salario m�nimo");
    }

    return 0;
}
