#include <stdio.h>

int main() {
    
    int primeiro_angulo;
    int segundo_angulo;
    int terceiro_angulo;


    printf("Digite o primeiro angulo: ");
    scanf("%d", &primeiro_angulo);
    printf("Digite o segundo angulo: ");
    scanf("%d", &segundo_angulo);

    terceiro_angulo = 180 - primeiro_angulo - segundo_angulo;

    printf("O terceiro angulo e: ");
    printf("%d", terceiro_angulo);
    printf(" graus");

    return 0;
}