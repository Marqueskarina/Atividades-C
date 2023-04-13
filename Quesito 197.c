#include <stdio.h>
#include <ctype.h>

int main() {
    char mensagem[101];
    int k;

    printf("Digite a mensagem a ser criptografada: ");
    fgets(mensagem, 101, stdin);
    printf("Digite o valor de K: ");
    scanf("%d", &k);

    int i;
    for (i = 0; mensagem[i] != '\0'; i++) {
        if (mensagem[i] == ' ') {
            printf(" ");
        } else {
            printf("%c", 'a' + (tolower(mensagem[i]) - 'a' + k) % 26);
        }
    }
    printf("\n");

    return 0;
}
