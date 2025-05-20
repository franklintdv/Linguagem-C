#include <stdio.h>

// Declaracao
float calcularAreaRetangulo(float base, float altura);

int main() {
    // Chamada
    float base;
    float altura;

    printf("Qual a base do triangulo:");
    scanf("%f", &base);

    printf("Qual a altura do triangulo:");
    scanf("%f", &altura);

    float area_retangulo = calcularAreaRetangulo(base, altura);
    printf("Area retangulo: %2.f\n", area_retangulo);
    return 0;
}

// Definicao
float calcularAreaRetangulo(float base, float altura) { 
   return base * altura; 
}
