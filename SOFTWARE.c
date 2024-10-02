#include <stdio.h>

int main() {
    char nome[50];
    const char usuario[] = "login";
    const char senha[] = "login";
    int funcao;

    void realizarLogin(const char * str, const char * text);
    realizarLogin(usuario, senha);

    printf("Seja muito bem-vindo\n");
    printf("Digite o nome:");
    scanf("%s", nome);

    printf("\nOla %s, me informe qual a sua funcao:", nome);
    printf("\nProfessor (1)");
    printf("\nAluno (2)\n");
    printf("INFORME:");
    scanf("%d", &funcao);

    if(funcao == 1) {
        void TelaProfessor(void);
        TelaProfessor();
    }
    else if(funcao == 2) {
        void TelaAluno(void);
        TelaAluno();
    }
    else {
        printf("Essa opcao nao existe");
    }
}
