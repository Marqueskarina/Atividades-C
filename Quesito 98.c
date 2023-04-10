#include <stdio.h>

int main() {
    int n, coeficiente, linha, elemento;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (linha = 0; linha < n; linha++) {
        coeficiente = 1;

        for (elemento = 0; elemento <= linha; elemento++) {
            printf("%d ", coeficiente);
            coeficiente = coeficiente * (linha - elemento) / (elemento + 1);
        }

        printf("\n");
    }

    return 0;
}
