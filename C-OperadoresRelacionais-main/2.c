#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float salario;
    printf("Salário: ");
    scanf("%f", &salario);

    if(salario <= 1799){
        printf("\nVocê ganha um salário menor que o salário mínimo!");
    } else if(salario == 1800){
        printf("\nVocê ganha um salário mínimo!");
    } else {
        printf("\nVocê ganha um salario maior que o salario mínimo");
    }

    return 0;
}
