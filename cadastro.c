#include "cadastro.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

// Função para validar a senha quando necessário
int validar_senha(char *senha_cadastrada)
{
    char input_senha[SENHA];

    printf("Digite sua senha: ");
    fgets(input_senha, SENHA, stdin);
    input_senha[strcspn(input_senha, "\n")] = '\0';

    if (strcmp(input_senha, senha_cadastrada) == 0)
    {
        return 1;
    }
    else
    {
        printf("Senha incorreta!\n");
        return 0;
    }
}

void cadastro(char *usuario, char *cpf, char *senha)
{
    printf("--- Cadastre-se ---\n");

    // Nome de usuário
    printf("Digite seu nome de usuario: ");
    fgets(usuario, USUARIO, stdin);
    usuario[strcspn(usuario, "\n")] = '\0';

    // CPF
    do
    {
        printf("Digite seu CPF (11 digitos, somente numeros): ");
        fgets(cpf, CPF, stdin);
        cpf[strcspn(cpf, "\n")] = '\0';
        clearBuffer();
        if (strlen(cpf) != 11)
        {
            printf("CPF invalido. Deve conter 11 digitos.\n");
        }
    } while (strlen(cpf) != 11);

    // Senha
    printf("Digite sua senha (maximo de %d caracteres): ", SENHA - 1);
    fgets(senha, SENHA, stdin);
    senha[strcspn(senha, "\n")] = '\0';

    printf("Conta criada com sucesso!\n");
}

void login(char *usuario, char *senha)
{
    char input_usuario[USUARIO];
    char input_senha[SENHA];

    printf("--- Faca seu login --- \n");
    clearBuffer();
    // Nome de usuário
    printf("Usuario: ");
    fgets(input_usuario, USUARIO, stdin);
    input_usuario[strcspn(input_usuario, "\n")] = '\0';

    // Senha
    printf("Senha: ");
    fgets(input_senha, SENHA, stdin);
    input_senha[strcspn(input_senha, "\n")] = '\0';

    // Valida login
    if (strcmp(input_usuario, usuario) == 0 && strcmp(input_senha, senha) == 0)
    {
        printf("Login realizado com sucesso!\n");
    }
    else
    {
        printf("Usuario ou senha incorretos!\n");
    }
}