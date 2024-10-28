#include <stdio.h>
#include <stdlib.h>

int main(void){

    double altura;
    printf("Altura: ");
    scanf("%lf", &altura);

    if(altura >= 1.80){
        printf("\nVoce e maior que 1,80 metro");
    } else {
        printf("\nVoce e menor que 1,80 metro");
    }

    return 0;
}
