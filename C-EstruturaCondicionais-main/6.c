#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Número: ");
    scanf("%d", &num);

    if((num % 2) == 0){
        printf("\nO número %d é par!", num);
    } else {
        printf("\nO número %d é impar!", num);
    }

    return 0;
}
