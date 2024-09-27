#ifndef cadastro_h
#define cadastro_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SENHA 7
#define USUARIO 30
#define CPF 12

void clearBuffer();
void cadastro(char *, char *, char *);
void login(char *, char *);
int validar_senha(char *);

#endif