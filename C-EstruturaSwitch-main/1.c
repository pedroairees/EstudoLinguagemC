#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int ddd;

    printf("Informe o DDD (xx), mostraremos a cidade!!");
    printf("\nDDD: ");
    scanf("%d", &ddd);

    switch(ddd){
    case 61:
        printf("\n\n61 --> Bras�lia");
        break;
    case 71:
        printf("\n\n71 --> Salvador");
        break;
    case 11:
        printf("\n\n11 --> S�o Paulo");
        break;
    case 21:
        printf("\n\n21 --> Rio de Janeiro");
        break;
    case 32:
        printf("\n\nJuiz de Fora");
        break;
    case 19:
        printf("\n\nCampinas");
        break;
    case 27:
        printf("\n\nVit�ria");
        break;
    case 31:
        printf("\n\nBelo Horizonte");
        break;
    default:
        printf("DDD n�o encontrado, tente novamente!");
        break;
    }

    return 0;
}
