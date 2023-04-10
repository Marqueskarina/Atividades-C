//  65. Faça um programa que receba do usuário um vetor com 10 posições. Em 
// seguida, deverá ser impresso o maior e o menor elemento do vetor.   

#include <stdio.h>
main (){
    int vetor [10], cont;
    int maior, menor = 0;

    for (cont = 0; cont < 10; cont++)
    {
        printf("Digite um valor para ser guardado");
        scanf("%d", &vetor[cont]);
        if (cont == 0){
            maior = vetor[cont];
            menor = vetor[cont];
        }
        else if (vetor[cont] > maior){
            maior = vetor[cont];
        }
        else{
            menor = vetor[cont];
        }
    }
    printf("Maior numero: %d\nMenor numero: %d", maior, menor);
    scanf(" ");
