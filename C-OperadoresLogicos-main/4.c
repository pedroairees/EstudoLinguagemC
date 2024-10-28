#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double num1, num2, num3;

    printf("Número 1: ");
    scanf("%lf", &num1);
    printf("\nNúmero 2: ");
    scanf("%lf", &num2);
    printf("\nNúmero 3: ");
    scanf("%lf", &num3);

    system("cls");
    printf("Número 1 --> %.1lf", num1);
    printf("\nNúmero 2 --> %.1lf", num2);
    printf("\nNúmero 3 --> %.1lf", num3);

    double maior =  num1;
    if(num2 > maior){
        maior = num2;
    } else if(num3 > maior){
        maior = num3;
    }

    double menor =  num1;
    if(num2 < menor){
        menor = num2;
    } else if(num3 < menor){
        menor = num3;
    }

    double meio = (num1 + num2 + num3) - maior - menor;

    printf("\n\nOrdem decrescente --> %.1lf, %.1lf, %.1lf", maior, meio, menor);

    return 0;
}
