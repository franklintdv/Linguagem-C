#include <stdio.h>

// Declaracao
void situacao_aluno(float media_final, int faltas);

int main() {
    float media_final;
    int faltas;

    situacao_aluno(10, 11);

    return 0;
}

// Definicao 
void situacao_aluno(float media_final, int faltas){
    if (faltas <= 10) {
        if (media_final >= 9.5){
            printf("APROVADO COM LOUVOR");
        } else if (media_final >= 7.0) {
            printf("APROVADO");
        } else {
            printf("REPROVADO");
        }
    } else {
        printf("REPROVADO");
    }
    }
