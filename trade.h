#ifndef trade_h
#define trade_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define taxa_bit_compra 0.02
#define taxa_bit_venda 0.03
#define taxa_eth_compra 0.01
#define taxa_eth_venda 0.02
#define taxa_xrp_compra 0.01
#define taxa_xrp_venda 0.01
#define SENHA 7
#define USUARIO 30
#define CPF 12
#define MAX_TRANSACOES 100

// struct de extrato
typedef struct{
    char data[11];
    char tipoOperacao[10];
    float valor;
    float taxa;
    char criptomoeda[10];
} Transacao;

Transacao historicoTransacoes[MAX_TRANSACOES];

// struct com dados de criptomoeda
typedef struct {
    char nome[50];
    float cotacao;
    float quantidade;
} Criptomoeda;

//struct com dados do usuario
typedef struct {
    int id;
    char nome[50];
} Usuario;

void carteira(float *, Criptomoeda *, int);
void depositar_reais(float *);
void sacar_reais(float *, char *);
void comprar_cripto(float *, Criptomoeda *, int, char *);
void vender_cripto(float *, Criptomoeda *, int, char *);
void atualizar_cotacao(Criptomoeda *, int);
void salvarTransacao(Usuario, Transacao);
void consultarExtrato(Usuario);
#endif
