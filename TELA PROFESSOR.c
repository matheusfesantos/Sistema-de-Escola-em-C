#include <stdio.h>

void TelaProfessor(){
        int funcao = 0;

        printf(("Oque voce deseja ?:\n"));

        while(1) {
                printf("[ALUNOS]- 1");
                printf("\n[SALAS] -2");
                printf(("\n[BOLETIM]- 3"));
                printf("\nInforme: ");
                scanf("%d", funcao);

                if(funcao == 1) {
                        printf("Tela Alunos");
                }
                else if(funcao == 2) {
                        printf("Tela Salas");
                }
                else if(funcao == 3) {
                        printf("Tela Boletim");
                }

                else {
                        printf("Essa funcao nao existe");
                }

                }
        }