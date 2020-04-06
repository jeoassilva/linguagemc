#include <stdio.h>
#include "prototipos.h"

char nomeOperacao1 [5] = "Soma";
char nomeOperacao2 [10] = "Subtracao";
char nomeOperacao3 [14] = "Multiplicacao";
char nomeOperacao4 [8] = "Divisao";

int nomeOperacao (void)
{
    if(opcao == 1)
    {
        printf("Operacao %s \n", nomeOperacao1);
    }
    else if(opcao == 2)
    {
        printf("Operacao %s \n", nomeOperacao2);
    }
    else if(opcao == 3)
    {
        printf("Operacao %s \n", nomeOperacao3);
    }
    else if(opcao == 4)
    {
        printf("Operacao %s \n", nomeOperacao4);
    }

    return 0;
}