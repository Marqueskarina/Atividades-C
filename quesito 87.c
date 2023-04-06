// (87). Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores 
// v1 e v2. Copie os valores ímpares de v para v1, e os valores pares de v para 
// v2. Note que cada um dos vetores v1 e v2 tem no máximo 10 elementos, mas 
// nem todos os elementos são utilizados. No final escreva os elementos 
// UTILIZADOS de v1 e v2.


#include <stdio.h>
main(){
    int v[10], v1 [10], v2[10];  
    int cont, cont1 = 0, cont2 = 0;  //os cont's 1 e 2 seram usados como contadores e marcadores de posiçoes do v1 e v2
    for(cont = 0; cont < 10; cont++){
        printf("Digite o valor que sera guardado: ");
        scanf("%d", &v[cont]);
        if(v[cont]== 0){ //tirando a possibilidade do 0 ir parar nos outros vetores
            
        }
        else if (v[cont] % 2 != 0){  //verificando se o numero digitado é impar
            v1[cont1] = v[cont];
            cont1++;    
        }
        else{  // caso não for impar nem 0 logo será par
            v2[cont2] = v[cont];
            cont2++;
        }
    } // o cont1 e o cont2 indicam a quantidade de espaços ocupados nos vetores
      // logo usaremos para imprimirmos a quantidade exata de posições
    printf("vetor de impares: \n");
    for(cont = 0; cont < cont1; cont++){
        printf("%d ", v1[cont]);
    }
    printf("\nvetor de pares: \n");
    for(cont = 0; cont < cont2; cont++){
        printf("%d ", v2[cont]);
    }
}

