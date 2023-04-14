#include <stdio.h>

void imprimir_sucessoes_gols(int m, int n, char* sucessao_atual) {
    if (m == 0 && n == 0) {
        printf("%s\n", sucessao_atual);
    } else {
        if (m > 0) {
            sucessao_atual[m+n-1] = 'A';
            imprimir_sucessoes_gols(m-1, n, sucessao_atual);
        }
        if (n > 0) {
            sucessao_atual[m+n-1] = 'B';
            imprimir_sucessoes_gols(m, n-1, sucessao_atual);
        }
    }
}

int main() {
    int m = 3;
    int n = 1;
    char sucessao_atual[m+n+1];
    sucessao_atual[m+n] = '\0';
    imprimir_sucessoes_gols(m, n, sucessao_atual);
    return 0;
}
