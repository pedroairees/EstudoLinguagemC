#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero (INTEIRO e POSITIVO):  ");
    scanf("%d", &num);

    if(num < 0){
        system("cls");
        printf("Execute novamente, e informe um n�mero POSITIVO e INTEIRO!");
    } else{
        printf("\n\N�mero digitado --> %d\n", num);
        for(int i = 1; i <= 5; i++){
            printf("\n%d", num);
            num += num * 2;
        }
    }

    return 0;
}
