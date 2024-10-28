#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    //pedidos --> nome, idade > 12, sexo, voto != diferente, pessoas entrevistado >= 50 <= 300;
    int sam = 0, alex = 0, dzsenifer = 0, amandine = 0, marta = 0;
    int sexoM = 0, sexoF = 0;

    char nome[40];
    int idade;
    char sexo;
    int voto;
    printf("* Votação de preferida da FIFA *\n");

    for(int pessoa = 1; pessoa <= 300; pessoa++){
        printf("\nPessoa %d", pessoa);
        //nome
        printf("\nNome --> ");
        fgets(nome, sizeof(nome), stdin);
        getchar();

        //idade
        do{
            printf("\nIdade --> ");
            scanf("%d", &idade);
            if(idade < 12){
                printf("\nIdade precisa ser maior que 12 anos!!");
            }
            getchar();
        }while(idade < 12);

        //sexo
        do{
            printf("\nInforme seu sexo (M - masculino  F - feminino) -->");
            scanf(" %c", &sexo);
            getchar();
            switch(sexo){
                case 'M':
                case 'm':
                    sexoM++;
                    break;
                case 'F':
                case 'f':
                    sexoF++;
                    break;
                default:
                    printf("\nOpção invalida, tente novamente!");
                    break;
            }
            getchar();
        }while(sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F');

        //votação
        do{
            printf("\nVotação:\n");
            printf("1 - Sam Kerr   2 - Alex Morgan\n");
            printf("3 - Dzsenifer Marozsan   4 - Amandine Henry\n");
            printf("5 - Marta Vieira\n");
            printf("Voto --> ");
            scanf("%d", &voto);
            switch(voto){
                case 1:
                    sam++;
                    break;
                case 2:
                    alex++;
                    break;
                case 3:
                    dzsenifer++;
                    break;
                case 4:
                    amandine++;
                    break;
                case 5:
                    marta++;
                    break;
                default:
                    printf("\nOpção incorreta, tente novamente!");
                    break;
            }
            getchar();
        }while(voto != 1 && voto != 2 && voto != 3 && voto != 4 && voto != 5);

        int opcaoSair;
        if(pessoa >= 50){
            printf("\nDeseja sair? (1 - sim   2 - não) --> ");
            scanf("%d", &opcaoSair);
            if(opcaoSair == 1){
                break;
            }
        }

        system("cls");
    }

    printf("Estastiticas:\n");
    //votos
    printf("Votos:\n");
    printf("Sam Kerr --> %d\n", sam);
    printf("Alex Morgan --> %d\n", alex);
    printf("Dzsenifer Marozsan --> %d\n", dzsenifer);
    printf("Amandine Henry --> %d\n", amandine);
    printf("Marta Vieira --> %d\n", marta);

    //mais votada
    if(sam > alex && sam > dzsenifer && sam > amandine && sam > marta){
        printf("Jogadora mais votada --> Sam Kerr\n");
    } else if(alex > sam && alex > dzsenifer && alex > amandine && alex > marta){
        printf("Jogadora mais votada --> Alex Morgan\n");
    } else if(dzsenifer > sam && dzsenifer > alex && dzsenifer > amandine && dzsenifer > marta){
        printf("Jogadora mais votada --> Dzsenifer Marozsan\n");
    } else if(amandine > sam && amandine > alex && amandine > dzsenifer && amandine > marta){
        printf("Jogadora mais votada --> Amandine Henry\n");
    } else {
        printf("Jogadora mais votada --> Marta Vieira\n");
    }


    return 0;
}
