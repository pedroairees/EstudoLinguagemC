#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("N�mero: ");
    scanf("%d", &num);

    if((num % 2) == 0){
        printf("\nO n�mero %d � par!", num);
    } else {
        printf("\nO n�mero %d � impar!", num);
    }

    return 0;
}
