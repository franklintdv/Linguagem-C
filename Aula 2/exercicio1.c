#include <stdio.h>

int main() {

    char nome[15];
    int idade;
    float altura;
    char genero;
    
    printf("Qual e o seu nome: ");
    scanf("%s", nome);

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    printf("Qual a sua altura:");
    scanf("%f", &altura);

    printf("Qual o seu genero: ");
    scanf(" %c", &genero);

    printf("Bem-vindo(a), ");
    printf("%s\n", nome);
    printf("Seu Perfil\n");
    printf("Nome: ");
    printf("%s\n", nome);
    printf("Idade: ");
    printf("%d\n", idade);
    printf("Altura: ");
    printf("%.2f\n", altura);
    printf("Genero: ");
    printf(" %c", genero);
    
    return 0;
}