#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int prato, sobremesa, bebida;
    int caloria = 0;

    printf("Selecione seus pratos,e veja ao final o total de calorias: \n");
    //prato
    printf("\nPrato:");
    printf("\n1 - Vegetariano    2- Peixe");
    printf("\n3- Frango             4 - Carne\n");
    printf("\nPrato --> ");
    scanf("%d", &prato);
    switch(prato){
        case 1:
            caloria += 180;
            break;
        case 2:
            caloria += 230;
            break;
        case 3:
            caloria += 250;
            break;
        case 4:
            caloria += 350;
            break;
        default:
            printf("\nPrato não encontrado!");
            break;
    }

    //sobremesa
    system("cls");
    printf("Sobremesa:\n");
    printf("\n1 - Abacaxi         2 - Sorvete Diet");
    printf("\n3 - Mouse Diet      4 - Mouse Chocolate\n");
    printf("\nSobremesa --> ");
    scanf("%d", &sobremesa);
    switch(sobremesa){
        case 1:
            caloria += 75;
            break;
        case 2:
            caloria += 110;
            break;
        case 3:
            caloria +=170;
            break;
        case 4:
            caloria += 200;
            break;
        default:
            printf("\nSobremesa não encontrada!");
    }

    //bebida
    system("cls");
    printf("Bebida:\n");
    printf("\n1 - Chá         2 - Suco de Laranja");
    printf("\n3 - Suco de Melão    4 - Refriferante Diet\n");
    printf("\nBebida --> ");
    scanf("%d", &bebida);
    switch(bebida){
        case 1:
            caloria += 20;
            break;
        case 2:
            caloria += 70;
            break;
        case 3:
            caloria += 100;
            break;
        case 4:
            caloria += 65;
            break;
        default:
            printf("\nBebida não encontrada!");
            break;
    }

    system("cls");
    printf("\nValor total de Calorias -->  %d\n", caloria);

    return 0;
}
