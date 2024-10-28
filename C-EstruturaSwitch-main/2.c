#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int pedido;
    int quantidade;
    int continuar = 1;
    double valorTotal = 0;

    printf("*******************\n");
    printf("**   Cardápio    **\n");
    printf("*******************\n");



    do{

        printf("\n100 - Cachorro Quente --> R$10,10         101 - Bauru Simples --> R$8,30");
        printf("\n102 - Bauru c/ovo --> R$8,50         103 - Hamburguer --> R$12,50");
        printf("\n104 - Cheeseburger --> R$13,25\n");

        printf("\nFaça o seu pedido:\n");
        printf("Pedido --> ");
        scanf("%d", &pedido);

        switch(pedido){
            case 100:
                printf("\nPedido: Cachorro quente\n");
                printf("Quantidade --> ");
                scanf("%d", &quantidade);
                valorTotal += 10.10 * quantidade;
                break;
            case 101:
                printf("\nPedido: Bauru Simples\n");
                printf("Quantidade --> ");
                scanf("%d", &quantidade);
                valorTotal += 8.30 * quantidade;
                break;
            case 102:
                printf("\nPedido: Bauru c/ovo\n");
                printf("Quantidade --> ");
                scanf("%d", &quantidade);
                valorTotal += 8.50 * quantidade;
                break;
            case 103:
                printf("\nPedido: Hamburguer\n");
                printf("Quantidade --> ");
                scanf("%d", &quantidade);
                valorTotal += 12.50 * quantidade;
                break;
            case 104:
                printf("\nPedido: Cheeseburguer\n");
                printf("Quantidade --> ");
                scanf("%d", &quantidade);
                valorTotal += 13.25 * quantidade;
                break;
            default:
                printf("Produto não encontrado, tente novamente!");
                break;
        }

        printf("\n\nDeseja fazer mais um pedido? (1- sim  2- não): ");
        scanf("%d", &continuar);
        if(continuar == 1){
            quantidade = 0;
            system("cls");
        }
    }while(continuar == 1);



    system("cls");
    printf("Valor total pedido--> R$%.2lf", valorTotal);

    return 0;
}
