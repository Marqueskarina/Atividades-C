#include <stdio.h>

void preencheArray(int *array, int tamanho, int valor) {
    int i;
    for (i = 0; i < tamanho; i++) {
        *(array + i) = valor;
    }
}

main() {
    int array[5];
    int tamanho = sizeof(array) / sizeof(int);
    int valor = 10;

    preencheArray(array, tamanho, valor);

    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

}
