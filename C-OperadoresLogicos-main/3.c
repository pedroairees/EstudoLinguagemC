#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double num1, num2, num3;

    printf("N�mero 1: ");
    scanf("%lf", &num1);
    printf("\nN�mero 2: ");
    scanf("%lf", &num2);
    printf("\nN�mero 3: ");
    scanf("%lf", &num3);

   double maior = num1;
   if(num2 > maior){
        maior = num2;
   }
   if(num3 > maior){
        maior = num3;
   }

   double menor = num1;
   if(num2 < menor){
        menor = num2;
   }
   if(num3 < menor){
        menor = num3;
   }

   double medio = ((num1 + num2 + num3) - menor) - maior;

    printf("Ordem crescente --> %.1lf, %.1lf, %.1lf", menor, medio, maior);

    return 0;
}
