#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double num;

    printf("Digite um n�mero para saber a raiz quadrada dele!\n");
    printf("N�mero: ");
    scanf("%lf", &num);

    double raizQuadrada = sqrt(num);

    if(num >= 0){
        system("cls");
        printf("A raiz quadrada do n�mero %.1lf � --> %.1lf", num, raizQuadrada);
    } else {
        double quadradoNum = pow(num, 2);
        system("cls");
        printf("Seu n�mero � negativo, portanto o quadrado de %.1lf --> %.1lf", num, quadradoNum);
    }

    return 0;
}
