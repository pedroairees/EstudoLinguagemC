#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int idade, tempoDeServico;

    printf("Digite sua idade e tempo de servi�o, e veja se ja pode se aposentar!\n");
    printf("Idade:  ");
    scanf("%d", &idade);
    printf("\nTempo de Servi�o:  ");
    scanf("%d", &tempoDeServico);

    system("cls");
    printf("* DADOS *\n");
    printf("Idade --> %d", idade);
    printf("\nTempo de Servi�o --> %d", tempoDeServico);

    if(idade >= 65){
        printf("\n\nPode se aposentar!!");
    } else if(tempoDeServico >= 30){
        printf("\n\nPode se aposentar!!");
    } else if(idade >= 60 && tempoDeServico >= 25) {
        printf("\n\nPode se aposentar!!");
    } else {
        printf("\n\nVoc� ainda n�o pode se aposentar!");
    }

    return 0;
}
