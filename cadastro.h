#ifndef cadastro_h
#define cadastro_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trade.h"

#define SENHA 7
#define USUARIO 30
#define CPF 12

int validar_senha(char *);
void clearBuffer();
void cadastro(char *, char *, char *);
void login(char *, char *);

#endif