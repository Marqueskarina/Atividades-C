#include <stdio.h>

int main() {
    float nota1, nota2, mediaSimples, mediaPonderada;

    // Leitura das notas
    do {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
    } while (nota1 < 0 || nota1 > 10);

    do {
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
    } while (nota2 < 0 || nota2 > 10);

    // Cálculo das médias
    mediaSimples = (nota1 + nota2) / 2;
    mediaPonderada = (nota1 + nota2 * 2) / 3;

    // Impressão das médias
    printf("Media simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}
