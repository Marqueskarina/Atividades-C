#include <stdio.h>

int divs(int num, int* max, int* min) {
    int i;

    // Verifica se o número é primo
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            // Se o número não for primo, armazena os menores e maiores divisores em max e min, respectivamente
            *max = num/i;
            *min = i;
            return 1;
        }
    }

    // Se o número for primo, retorna 0
    return 0;
}

int main() {
    int num, max, min;

    // Lê o número
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Chama a função divs
    if (divs(num, &max, &min)) {
        // Se o número não for primo, imprime seus divisores
        printf("O numero %d nao eh primo. Seus divisores sao %d e %d\n", num, max, min);
    } else {
        // Se o número for primo, imprime uma mensagem informando
        printf("O numero %d eh primo\n", num);
    }

    return 0;
}
