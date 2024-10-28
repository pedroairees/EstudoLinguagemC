#include <stdio.h>

int main(void){
    int num;

    printf("Nesse programa voce digita 1 numero, e mostraremos o dobro dele!!!");
    printf("\nNumero: ");
    scanf("%d", &num);

    int dobro = num * 2;

    printf("\n\nO dobro do numero %d e --> %d", num, dobro);

    return 0;
}
