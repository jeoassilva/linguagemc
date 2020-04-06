#include <stdio.h>
#include "prototipos.h"

int interacaoRepetirFuncao (void)
{
    printf("Deseja calcular outros valores?...\n");
    printf("[1] - Confirmar\n");
    printf("[0] - Cancelar\n");
    scanf("%d",&repeticao);
    setbuf(stdin , NULL);

    return 0;
}