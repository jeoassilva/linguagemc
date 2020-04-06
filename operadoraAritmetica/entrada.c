#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

int entradaNumeros (void)
{
        system("clear");

        printf("************************************\n");
        nomeOperacao();

        printf("************************************\n");
        printf("Digite um numero e pressione 'Enter' >_");
        scanf("%lf",&primeiroNumero);
        setbuf(stdin , NULL);
        printf("Digite outro numero e pressione 'Enter' >_");
        scanf("%lf",&segundoNumero);
        setbuf(stdin , NULL);

    return 0;
}