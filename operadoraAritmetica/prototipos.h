/*
    Em meus testes, foi percebido que o arquivo de protótipos não 
    aceita atribuição de valores às variáveis.
    Não foram realizados testes usando posições de memória constantes.
*/

#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

int operacaoSoma (void);
int operacaoSubtracao (void);
int operacaoMultiplicacao (void);
int operacaoDivisao (void);

int entradaNumeros (void);
int nomeOperacao (void);
int interacaoRepetirFuncao (void);

double somaNumeros (double primeiroNumero , double segundoNumero);
double subtracaoNumeros (double primeiroNumero , double segundoNumero);
double multiplicacaoNumeros (double primeiroNumero , double segundoNumero);
double divisaoNumeros (double primeiroNumero , double segundoNumero);

int opcao;
double primeiroNumero , segundoNumero;
int repeticao;

#endif