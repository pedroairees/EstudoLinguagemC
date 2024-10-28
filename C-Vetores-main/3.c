#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double quadrado = 0;
    double numerosReais[10];
    printf("Informe 10 números reais: \n");
    for(int i = 0; i < 10; i++){
        printf("\nNúmero %d --> ", i + 1);
        scanf("%lf", &numerosReais[i]);
        fflush(stdin);
    }

    system("cls");
    printf("A seguir o quadrado de cada número:\n");
    for(int i = 0; i < 10; i++){
        quadrado = pow(numerosReais[i], 2);
        printf("\nQuadrado de %.0lf -->   %.1lf", numerosReais[i], quadrado);
        quadrado = 0;
    }

    return 0;
}
