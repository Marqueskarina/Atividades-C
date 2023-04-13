#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LOJAS 10
#define TAM_NOME 50

typedef struct {
    char nome[TAM_NOME];
    char telefone[15];
    float preco;
} Loja;

int main() {
    Loja lojas[MAX_LOJAS];
    int num_lojas = 0;
    float media_preco = 0;

    // Cadastra as lojas com seus respectivos preços
    strcpy(lojas[0].nome, "Loja 1");
    strcpy(lojas[0].telefone, "(11) 1111-1111");
    lojas[0].preco = 1200.0;

    strcpy(lojas[1].nome, "Loja 2");
    strcpy(lojas[1].telefone, "(22) 2222-2222");
    lojas[1].preco = 1100.0;

    strcpy(lojas[2].nome, "Loja 3");
    strcpy(lojas[2].telefone, "(33) 3333-3333");
    lojas[2].preco = 1300.0;

    num_lojas = 3;

    // Calcula a média de preços
    int i;
    for (i = 0; i < num_lojas; i++) {
        media_preco += lojas[i].preco;
    }
    media_preco /= num_lojas;

    // Mostra as lojas com preços abaixo da média
    printf("Lojas com preços abaixo da média (%.2f):\n", media_preco);
    for (i = 0; i < num_lojas; i++) {
        if (lojas[i].preco < media_preco) {
            printf("- %s (%s)\n", lojas[i].nome, lojas[i].telefone);
        }
    }

    return 0;
}
