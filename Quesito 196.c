#include <stdio.h>
#include <string.h>  // biblioteca necessária para a função strlen()

#define MAX 20  // constante que define o tamanho máximo da string

int main() {
    char string[MAX];  // declaração da variável que vai armazenar a string
    char caractere;  // declaração da variável que vai armazenar o caractere
    int i, j;  // variáveis para percorrer a string e a nova string resultante

    // leitura da string
    printf("Digite uma string com no máximo %d caracteres: ", MAX);
    scanf("%s", string);

    // leitura do caractere
    printf("Digite o caractere que deseja remover: ");
    scanf(" %c", &caractere);  // espaço antes do %c para ignorar possíveis caracteres que tenham ficado no buffer

    // percorrer a string original e copiar para a nova string apenas os caracteres diferentes do caractere que deve ser removido
    j = 0;  // inicializa o índice da nova string
    for (i = 0; i < strlen(string); i++) {
        if (string[i] != caractere) {  // se o caractere atual for diferente do que deve ser removido
            string[j] = string[i];  // copia o caractere para a nova string
            j++;  // incrementa o índice da nova string
        }
    }
    string[j] = '\0';  // adiciona o caractere nulo para indicar o final da nova string

    // exibição da nova string resultante
    printf("Nova string: %s\n", string);

    return 0;
}
