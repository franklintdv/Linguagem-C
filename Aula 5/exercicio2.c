#include <stdio.h>

// Declaracao
void mensagemPersonalizada(char nome[], int idade);

int main() {
    char nome[15];
    int idade;

    printf("Qual seu nome: ");
    scanf("%s", nome);
    printf("Qual sua idade: ");
    scanf("%d", &idade);

    mensagemPersonalizada(nome, idade);

    return 0;
}

// Definicao

void mensagemPersonalizada(char nome[], int idade){
    printf("Ola, %s você tem %d anos. Seja bem-vindo(a).", nome, idade);
}
