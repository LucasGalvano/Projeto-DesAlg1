#include "cadastro.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//funcao para validar a senha qnd preciasar
int validar_senha(char *senha_cadastrada) {
    char input_senha[SENHA];

    printf("Digite sua senha: ");
    fgets(input_senha, SENHA, stdin);
    input_senha[strcspn(input_senha, "\n")] = '\0';

    if (strcmp(input_senha, senha_cadastrada) == 0) {
        return 1;
    }
    else {
        printf("Senha incorreta!\n");
        return 0;
    }
}
void cadastro(char *usuario, char *cpf, char *senha) {
    printf("--- Cadastre-se ---\n\n");

    // Nome de usuário
    printf("Digite seu nome de usuario: ");
    fgets(usuario, USUARIO, stdin);
    usuario[strcspn(usuario, "\n")] = '\0';

    // CPF
    printf("Digite seu CPF (somente numeros): ");
    fgets(cpf, CPF, stdin);
    cpf[strcspn(cpf, "\n")] = '\0';
    clearBuffer();

    if (strlen(cpf) >= CPF || strlen(cpf) <= CPF) {
        printf("Digite um CPF valido.\n");
        printf("Digite seu CPF novamente: \n");
        fgets(cpf, CPF, stdin);
        cpf[strcspn(cpf, "\n")] = '\0';
        clearBuffer();
    }

    // Senha
    printf("Digite sua senha (maximo de %d caracteres): ", SENHA - 1);
    fgets(senha, SENHA, stdin);
    senha[strcspn(senha, "\n")] = '\0';
    clearBuffer();
    printf("Conta criada com sucesso!\n");
}

void login(char *usuario, char *senha) {
    char input_usuario[USUARIO];
    char input_senha[SENHA];

    printf("--- Faca seu login --- \n\n");

    // Nome de usuário
    printf("Usuario: ");
    fgets(input_usuario, USUARIO, stdin);
    input_usuario[strcspn(input_usuario, "\n")] = '\0';

    // Senha
    printf("Senha: ");
    fgets(input_senha, SENHA, stdin);
    input_senha[strcspn(input_senha, "\n")] = '\0';

    // Valida login
    if (strcmp(input_usuario, usuario) == 0 && strcmp(input_senha, senha) == 0) {
        printf("Login realizado com sucesso!\n");
    }
    else {
        printf("Usuario ou senha incorretos!\n");
    }
}



