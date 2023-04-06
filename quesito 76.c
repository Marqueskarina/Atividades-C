// (76.)  Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que 
// possuírem valores negativos.

#include <stdio.h>

main (){
    int vetor [10], cont;

for(cont = 0; cont < 10; cont++)
{   printf("Digite o numero que sera guardado");
    scanf("%d", &vetor[cont]);
    if (vetor[cont] < 0){ //testamos se o número da posição atual é negativo
        vetor[cont] = 0;  //Atribuindo 0 para valores negativos
    }
}
printf("\nSegue a lista modificada: \n");
for(cont = 0; cont < 10; cont++){
    printf("%d\n", vetor[cont]);
}
}
