#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double num;
    printf("N�mero: ");
    scanf("%lf", &num);

    if(num < 5){
        printf("\nSeu n�mero � menor do que 5!");
    } else if(num == 5){
        printf("\nSeu n�mero � 5!");
    } else if(num >= 5 && num < 200){
        printf("\nSeu n�mero est� entre 5 e 200!");
    } else if(num == 200){
        printf("\nSeu n�mero � 200!");
    } else if(num > 200 && num < 400){
        printf("\nSeu n�mero est� entre 200 e 400!");
    } else if(num == 400){
        printf("Seu n�mero � 400!");
    } else if(num >= 500 && num < 1000){
        printf("\nSeu n�mero est� entre 500 e 1000!");
    } else {
        printf("\nSeu n�mero est� fora dos escopos!");
    }

    return 0;
}
