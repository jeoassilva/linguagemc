/*
    Programa Operadora Aritmética | 22/Fev/2020 - 22H02min

*/

#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

/* Função principal que inicializa o programa */
int main (void)
{
    while(opcao != 5)
    {
        system ("clear");
        printf("***********************************\n");
        printf("Operadora Aritmetica\n");
        printf("***********************************\n");
        printf("Digite uma opcao e pressione 'Enter'\n");
        
        printf("[1] - Soma\n");
        printf("[2] - Subtracao\n");
        printf("[3] - Multiplicacao\n");
        printf("[4] - Divisao\n");
        printf("[5] - Encerrar o programa\n");
        printf(">_");
        scanf("%d",&opcao);
        setbuf(stdin , NULL);

        switch(opcao)
        {
            case 1:
                operacaoSoma();
            break;
            case 2:
                operacaoSubtracao();
            break;
            case 3:
                operacaoMultiplicacao();
            break;
            case 4:
                operacaoDivisao();
            break;
            case 5:
                system("clear");
                printf("************************************\n");
                printf("Programa encerrado...\n");
                printf("************************************\n");
            break;
            default:
                printf("************************************\n");
                system("clear");
                printf("Opcao invalida\n");
                printf("Pressione 'Enter' para continuar...\n");
                printf("************************************\n");
                getchar();
                system("clear");
        }

    }/* Fim do 'while' */

    return 0;
}