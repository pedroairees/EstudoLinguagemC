#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double num;

    printf("Digite um número para saber a raiz quadrada dele!\n");
    printf("Número: ");
    scanf("%lf", &num);

    double raizQuadrada = sqrt(num);

    if(num >= 0){
        system("cls");
        printf("A raiz quadrada do número %.1lf é --> %.1lf", num, raizQuadrada);
    } else {
        double quadradoNum = pow(num, 2);
        system("cls");
        printf("Seu número é negativo, portanto o quadrado de %.1lf --> %.1lf", num, quadradoNum);
    }

    return 0;
}
