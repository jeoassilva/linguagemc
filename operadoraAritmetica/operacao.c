#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

int operacaoSoma (void)
{
    do
    {
        entradaNumeros();
        printf("Resultado da Soma: %.2lf\n", somaNumeros(primeiroNumero,segundoNumero));
        interacaoRepetirFuncao();
    } while (repeticao != 0);
    system("clear");
    return 0;
}

int operacaoSubtracao (void)
{
    do
    {
        entradaNumeros();
        printf("Resultado da Subtracao: %.2lf\n", subtracaoNumeros(primeiroNumero,segundoNumero));
        interacaoRepetirFuncao();
    } while (repeticao != 0);
    system("clear");
    return 0;
}

int operacaoMultiplicacao (void)
{
    do
    {
        entradaNumeros();
        printf("Resultado da Multiplicacao: %.2lf\n", multiplicacaoNumeros(primeiroNumero,segundoNumero));
        interacaoRepetirFuncao();
    } while (repeticao != 0);
    system("clear");
    return 0;
}

int operacaoDivisao (void)
{
    do
    {
        entradaNumeros();
        printf("Resultado da Divisao: %.2lf\n", divisaoNumeros(primeiroNumero,segundoNumero));
        interacaoRepetirFuncao();
    } while (repeticao != 0);
    system("clear");
    return 0;
}