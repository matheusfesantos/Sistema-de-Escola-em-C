#include <stdio.h>
#include <string.h>

int realizarLogin() {
    const char usuario[] = "login";
    const char senha[] = "senha";
    char login[50];
    char senhaInput[50];

    printf("Login: ");
    if (scanf("%49s", login) != 1) {
        printf("Erro ao ler o login.\n");
        return 0;
    }

    printf("Senha: ");
    if (scanf("%49s", senhaInput) != 1) {
        printf("Erro ao ler a senha.\n");
        return 0;
    }

    if (strcmp(login, usuario) == 0 && strcmp(senhaInput, senha) == 0) {
        printf("Login bem-sucedido!\n");
        return 1;
    } else {
        printf("Login ou senha incorretos. Tente novamente.\n");
        return 0;
    }
}
