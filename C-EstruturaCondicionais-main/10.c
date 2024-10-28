#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double a, b, c;
    double delta, x1, x2;

    printf("Digite o valor de a -->  ");
    scanf("%lf", &a);

    if(a == 0){
        printf("\nNão é uma equação de segundo grau!!\n");
    } else {
        printf("\nDigite o valor de b -->   ");
        scanf("%lf", &b);

        printf("Digite o valor de c -->  ");
        scanf("%lf", &c);


        delta = b * b - 4 * a * c;

        if(delta < 0){
            printf("\nNão existe raízes reais!");
        } else if(delta == 0){
            x1 = (-b + sqrt(delta)) / (2*a);
            printf("\nRaíz única: %.2lf", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("\nRaíz 1: %.2lf", x1);
            printf("\nRaiz 2: %.2lf", x2);
        }
    }

    return 0;
}
