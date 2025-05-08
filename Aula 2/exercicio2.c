#include <stdio.h>

int main() {
    
    char nome[15];
    float primeira_nota;
    float segunda_nota;
    float media;

    printf("Qual o seu nome: ");
    scanf("%s", nome);
    printf("Qual sua primeira nota: ");
    scanf("%f", &primeira_nota);
    printf("Qual a segunda nota: ");
    scanf("%f", &segunda_nota);

    media = (primeira_nota + segunda_nota) / 2;

    printf("O aluno ");
    printf("%s", nome);
    printf(" obteve media final ");
    printf("%.2f", media);

    return 0;
}