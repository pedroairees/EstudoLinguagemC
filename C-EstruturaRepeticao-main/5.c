#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num = 0;
    int contador = 1;

    while(contador <= 50){
        num += 2 * contador;
        contador++;
    }

    printf("A soma dos primeiros 50 números pares é --> %d", num);

    return 0;
}
