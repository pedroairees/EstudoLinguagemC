#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    // M_PI --> sigla da biblioteca math.h para expressar o numero matématico PI.
    double pi = M_PI;
    double raio;

    printf("Digite o valor do raio de um circulo, para descobrir sua área!");
    printf("\nRaio: ");
    scanf("%lf", &raio);

    //pow(numero, 2) --> função da biblioteca math.h de pegar numero elevado ao numero colocado em 2 lugar;
    double area = pi * pow(raio, 2);
    system("cls");
    printf("\nA área do seu circulo é --> %.1lf", area);

    return 0;
}
