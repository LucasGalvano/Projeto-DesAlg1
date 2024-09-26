#include "cadastro.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TRANSACOES 100

typedef struct
{
    char data[11];
    char tipoOperacao[10];
    float valor;
    float taxa;
    char criptomoeda[10];
} Transacao;

Transacao historicoTransacoes[MAX_TRANSACOES];
int totalTransacoes = 0;

void salvarTransacao(Transacao t)
{
    if (totalTransacoes < MAX_TRANSACOES)
    {
        historicoTransacoes[totalTransacoes++] = t;
    }
    else
    {
        for (int i = 1; i < MAX_TRANSACOES; i++)
        {
            historicoTransacoes[i - 1] = historicoTransacoes[i];
        }
        historicoTransacoes[MAX_TRANSACOES - 1] = t;
    }
}

void consultarExtrato()
{
    if (totalTransacoes == 0)
    {
        printf("Nenhuma transação realizada.\n");
        return;
    }

    printf("Extrato de transações:\n");
}