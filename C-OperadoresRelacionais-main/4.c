#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    double peso;
    printf("Seu peso: ");
    scanf("%lf", &peso);

    if(peso < 60){
        printf("\nSeu peso � menor que 60kg");
    } else {
        printf("\nSeu peso � maior que 60kg");
    }

    return 0;
}
