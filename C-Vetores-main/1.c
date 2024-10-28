#include <stdio.h>

int main(void){
    int vetorA[6] = {1, 0, 5, -2, -5, 7};
    for(int i = 0; i < 6; i++){
        printf("%d, ", vetorA[i]);
    }

    int soma = vetorA[0] + vetorA[1] + vetorA[5];
    printf("\nO valor da soma de %d + %d + %d --> %d\n", vetorA[0], vetorA[1], vetorA[5], soma);

    vetorA[3] = 100;
    for(int i = 0; i < 6; i++){
        printf("%d, ", vetorA[i]);
    }

    return 0;
}
