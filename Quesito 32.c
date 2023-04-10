/* 32. Fazer um programa para receber dois números 
 do tipo unsigned int do usuário e determinar se um número é permutação
 do outro ou não. Ex: 431 é permutação de 143, 42 é permutação de 204, 
 1211 é permutação de 1112, etc. O programa só deve aceitar números positivos.*/


#include <stdio.h>

int main() {
    unsigned int num1, num2;
    int digit_count[10] = {0}; // contador de dígitos

    printf("Digite o primeiro número: ");
    scanf("%u", &num1);

    printf("Digite o segundo número: ");
    scanf("%u", &num2);

    // verificar se os números são positivos
    if (num1 <= 0 || num2 <= 0) {
        printf("Os números devem ser positivos!\n");
        return 1;
    }

    // contar os dígitos de num1
    while (num1 > 0) {
        digit_count[num1 % 10]++;
        num1 /= 10;
    }

    // verificar se os dígitos de num2 estão presentes em num1
    while (num2 > 0) {
        if (digit_count[num2 % 10] == 0) {
            printf("Os números não são permutações um do outro.\n");
            return 0;
        }
        digit_count[num2 % 10]--;
        num2 /= 10;
    }

    printf("Os números são permutações um do outro.\n");

    return 0;
}
