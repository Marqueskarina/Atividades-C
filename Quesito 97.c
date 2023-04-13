#include <stdio.h>

int main() {
    int valores[10];

    // leitura dos valores e ordenação
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);

        // ordenação por inserção
        int j = i - 1;
        int temp = valores[i];
        while (j >= 0 && valores[j] > temp) {
            valores[j+1] = valores[j];
            j--;
        }
        valores[j+1] = temp;
    }

    // exibição dos valores ordenados
    printf("Valores ordenados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}
