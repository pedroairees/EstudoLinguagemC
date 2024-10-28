#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int opcaoSair = 0;
    int fruta, quantidade;
    double valorTotal = 0;

    printf("** Bem-vindo ao serviço de compras **\n");
    printf("\n1 - Abacaxi --> 5,00        2 - Maçã --> 1,00");
    printf("\n3 - Pera --> 4,00\n");

    do{
        printf("\nOpção frunta: ");
        scanf("%d", &fruta);
        switch(fruta){
            case 1:
                printf("\nQuantidade: ");
                scanf("%d", &quantidade);
                valorTotal += 5.00 * quantidade;
                break;
            case 2:
                printf("\nQuantidade: ");
                scanf("%d", &quantidade);
                valorTotal += 1.00 * quantidade;
                break;
            case 3:
                printf("\nQuantidade: ");
                scanf("%d", &quantidade);
                valorTotal += 4.00 * quantidade;
                break;
        }


        printf("\n\nDeseja adicionar mais frutas? 0- não 1 - sim --> ");
        scanf("%d", &opcaoSair);
    }while(opcaoSair == 1);

    system("cls");
    printf("Valor total da compra --> R$%.2lf", valorTotal);

    return 0;
}
