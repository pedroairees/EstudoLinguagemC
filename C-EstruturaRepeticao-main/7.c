#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int mulherEspecial = 0;

    int totalPessoas = 0, sexoFem = 0, sexoMas = 0;
    char sexo;
    int opcaoContinuar;
    //olhos
    char olho;
    int azul = 0, verde = 0, castanho = 0, preto = 0;

    //cabelo
    char cabelo;
    int loiro = 0, castanho_cabelo = 0, preto_cabelo = 0, ruivo = 0;

    int idade;
    int idadeRecomendada = 0; //de 18 á 35 anos
    double salario = 0;

    do{
        totalPessoas++;
        //sexo
        switch_sexo:
        printf("Informe seu sexo (m - masculino / f - feminino) -->");
        scanf(" %c", &sexo);
        switch(sexo){
            case 'm':
            case 'M':
                sexoMas++;
                break;
            case 'f':
            case 'F':
                sexoFem++;
                break;
            default:
                printf("\nResposta invalida. Tente novamente!\n");
                goto switch_sexo;
        }


        //olhos
        switch_olho:
        printf("\nInforme a cor do seu olho (a - Azul, v - Verde, c - Castanhos, p - Preto) --> ");
        scanf(" %c", &olho);
        switch(olho){
            case 'a':
            case 'A':
                azul++;
                break;
            case 'v':
            case 'V':
                verde++;
                break;
            case 'c':
            case 'C':
                castanho++;
                break;
            case 'p':
            case 'P':
                preto++;
                break;
            default:
                printf("\nResposta invalida. Tente novamente!\n");
                goto switch_olho;
        }


        //cabelo
        switch_cabelo:
        printf("\nCor do cabelo (l - loiro, c - castanho, p - preto, r - ruivos) --> ");
        scanf(" %c", &cabelo);
        switch(cabelo){
            case 'l':
            case 'L':
                loiro++;
                break;
            case 'c':
            case 'C':
                castanho_cabelo++;
                break;
            case 'p':
            case 'P':
                preto_cabelo++;
                break;
            case 'r':
            case 'R':
                ruivo++;
                break;
            default:
                printf("\nResposta invalida. Tente novamente!\n");
                goto switch_cabelo;
        }


        //idade
        printf("\nInforme sua idade --> ");
        scanf("%d", &idade);
        if(idade < 10 || idade > 100){
            printf("\nInsira uma idade maior que 10!!");
            printf("\nIdade --> ");
            scanf("%d", &idade);
        }
        if(idade >= 18 && idade <= 35){
            idadeRecomendada++;
        }

        //salario
        printf("\nSalário --> ");
        scanf("%lf", &salario);
        if(salario < 0){
            printf("\nSalário não pode ser negativo. Tente novamente!\n");
            printf("Salário --> ");
            scanf("%lf", &salario);
        }

        if(sexo == 'f' && idade >= 18 && idade <= 35 && olho == 'c' && cabelo == 'c'){
            mulherEspecial++;
        }


        system("cls");
        printf("Deseja adicionar mais uma pessoa ? (1 - sim  2 - não) --> ");
        scanf("%d", &opcaoContinuar);
    }while(opcaoContinuar == 1);

    double porcentagemFem = ((double)mulherEspecial / totalPessoas) * 100.0;

    system("cls");
    printf("\nMasculinos --> %d", sexoMas);
    printf("\nFemininos --> %d", sexoFem);
    printf("\nOlhos --> Azul: %d ,Verdes: %d, Castanho: %d, Preto: %d", azul, verde, castanho, preto);
    printf("\nCabelo --> Loiro: %d, Castanho: %d, Preto: %d, Ruivo: %d", loiro, castanho_cabelo, preto_cabelo, ruivo);
    printf("\nTotal de pessoas --> %d", totalPessoas);
    printf("\nIdade entre 18 e 35 anos --> %d", idadeRecomendada);
    printf("\nMulher especial --> %d", mulherEspecial);
    printf("\n\nPorcentagem de Mulher Especiais --> %%%.2lf", porcentagemFem);

    return 0;
}
