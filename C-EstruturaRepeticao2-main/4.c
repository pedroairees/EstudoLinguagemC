#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Informe um número (INTEIRO e POSITIVO) --> ");
    scanf("%d", &num);

    if(num < 0){
        system("cls");
        printf("\nTente novamente, e insira um número INTEIRO e POSITIVO!!");
    } else {
        for(int i = 1; i <= num; i++){
            if(num % i == 0){
                int result = num / i;
                printf("\nO número %d é divisivel por %d e fica --> %d", num, i, result);
            } else{
                continue;
            }
        }
    }

    return 0;
}
