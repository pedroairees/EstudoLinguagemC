#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    const int MAX_PESSOAS = 10;
    int pessoa = 1;

    char nome[30];
    char sexo;
    int masculino = 0, feminino = 0;
    int homem = 0, mulher = 0;
    double altura, peso;
    double alturaHom = 0, alturaFem = 0;
    double pesoHom = 0, pesoFem = 0;

    while(pessoa <= MAX_PESSOAS){
        printf("Nome --> ");
        fgets(nome, sizeof(nome), stdin);
        getchar();
        system("cls");
        printf("Pessoa %d: %s",pessoa, nome);
        do{
            printf("\nInforme seu sexo (M - masculino  F - feminino) --> ");
            scanf(" %c", &sexo);
            switch(sexo){
                case 'm':
                case 'M':
                    homem++;
                    break;
                case 'f':
                case 'F':
                    feminino++;
                    break;
                default:
                    printf("\nOpção invalida tente novamente!");
            }
        }while(sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F');
        getchar();
        printf("\nAltura (Ex: 1,80) --> ");
        scanf("%lf", &altura);
        if(sexo ==  'm' || sexo == 'M'){
            alturaHom += altura;
        } else if(sexo == 'f' || sexo == 'F'){
            alturaFem += altura;
        }
        getchar();
        printf("\nPeso --> ");
        scanf("%lf", &peso);
        if(sexo == 'm' || sexo == 'M'){
            pesoHom += peso;
        } else if(sexo == 'f' || sexo == 'F'){
            pesoFem += peso;
        }
        getchar();
        pessoa++;
        system("cls");
    }

    double totalAltura = alturaFem + alturaHom;
    double totalPeso = pesoFem + pesoHom;
    double alturaMediaHom = alturaHom / (double)homem;
    double alturaMediaFem = alturaFem / (double)feminino;
    double alturaMediaGrupo = totalAltura / 10.0;
    double pesoMediaHom = pesoHom / (double)homem;
    double pesoMediaFem = pesoFem / (double)feminino;
    double pesoMediaGrupo = totalPeso / 10.0;

    printf("** Estatisticas **\n");
    printf("Número de homens --> %d\n", homem);
    printf("Número de mulheres --> %d\n", feminino);
    printf("Média altura homens --> %.2lf\n", alturaMediaHom);
    printf("Média altura mulheres --> %.2lf\n", alturaMediaFem);
    printf("Média altura grupo total --> %.2lf\n", alturaMediaGrupo);
    printf("Média peso homens --> %.2lf\n", pesoMediaHom);
    printf("Média peso mulheres --> %.2lf\n", pesoMediaFem);
    printf("Média peso grupo total --> %.2lf", pesoMediaGrupo);


    return 0;
}
