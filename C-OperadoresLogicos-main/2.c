#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double a, b, c, d;
    double maior = 0, menor = 0;
    char menorL, maiorL;

    printf("Informe 4 n�meros, e descubra qual maior � o menor!\n");
    printf("N�mero A: ");
    scanf("%lf", &a);
    printf("\nN�mero B: ");
    scanf("%lf", &b);
    printf("\nN�mero C: ");
    scanf("%lf", &c);
    printf("\nN�mero D: ");
    scanf("%lf", &d);

    system("cls");
    printf("Escolhas: ");
    printf("\n\nN�mero A --> %.1lf", a);
    printf("\nN�mero B --> %.1lf", b);
    printf("\nN�mero C --> %.1lf", c);
    printf("\nN�mero D --> %.1lf", d);

    //maior
    if(a > b && a > c && a > d){
        maior = a;
        maiorL = 'A';
    } else if(b > a && b > c && b > d){
        maior = b;
        maiorL = 'B';
    } else if(c > a && c > b && c > d){
        maior = c;
        maiorL = 'C';
    } else {
        maior = d;
        maiorL = 'D';
    }

    //menor
    if(a < b && a < c && a < d){
        menor = a;
        menorL = 'A';
    } else if(b < a && b < c && b < d){
        menor = b;
        menorL = 'B';
    } else if(c < a && c < b && c < d){
        menor = c;
        menorL = 'C';
    } else {
        menor = d;
        menorL = 'D';
    }

    printf("\n\nO maior n�mero � o %c --> %.1lf", maiorL, maior);
    printf("\nO menor n�mero � o %c --> %.1lf", menorL, menor);

    return 0;
}
