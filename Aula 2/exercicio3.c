#include <stdio.h>

int main() {
    
    char nome[15];
    float peso;
    float altura;
    float imc;

    printf("Qual o seu nome: ");
    scanf("%s", nome);
    printf("Qual seu peso (kg): ");
    scanf("%f", &peso);
    printf("Qual sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("%s", nome);
    printf(", seu IMC e ");
    printf("%.2f", imc);

    return 0;
}