#ifndef funcoes_h
#define funcoes_h

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

typedef struct {
    char nome[50];
    float cotacao;
    float quantidade;
} Criptomoeda;


void clearBuffer();
void cadastro(char *, char *, char *);
void login(char *, char *);
int validar_senha(char *);
void carteira(float *, Criptomoeda *, int);
void depositar_reais(float *);
void sacar_reais(float *, char *);
void comprar_cripto(float *, Criptomoeda *, int, char *);
void vender_cripto(float *, Criptomoeda *, int, char *);
void atualizar_cotacao(Criptomoeda *, int);

#endif
