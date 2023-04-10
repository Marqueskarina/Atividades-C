/*Um pecuarista possui uma determinada quantia de bois, que possuem 
um identificador numérico (de 1 a n) cada um. Faça um programa que:
1. receba o peso de cada boi, um por vez, e o armazene em um vetor. Se o 
peso digitado for 0 significa que não há mais bois a serem digitados;


2. Mostre a lista de todos os bois com seus identificadores e também os 
identificadores do boi mais gordo e do boi mais magro. Se houver dois ou 
mais bois mais gordos ou mais magros mostrar o de menor identificador;

3. Faça o mesmo programa considerando que o número de bois é fixo e 
igual a dez*/

#include <stdio.h>

main(){
	float vetorp [1000], gordo=0, magro=0, u;
	int cont = 1, i, idG = 0, idM= 0;
	
	while (cont < 1000){
		printf("Digite o peso do boi: ");
		scanf("%f",& u);
		if (u == 0){
			break;       //pausando a execução do while caso o numero digitado for 0
		}
		else{
			vetorp[cont]= u;
		}
		if (cont == 1){
			gordo = vetorp[cont];
			magro = vetorp[cont];
			idG = cont;    // o idM e o idG seram para guardar a posição do boi mais magro e do mais gordo.
			idM = cont;
		}
		else if (vetorp[cont] > gordo){
		 	gordo = vetorp[cont];
		 	idG = cont;
		}
		else if (vetorp[cont] < magro){
			magro = vetorp[cont];
			idM = cont;
		}
		cont++;
	}
	printf("==============================================\n");
	
	for(i = 1; i < cont; i++){
		printf(" %.2f", vetorp[i]);
	}
	printf("\nO indentificador do boi mais gordo eh: %d\nseu peso eh: %.2f\n",idG, vetorp[idG]);
	printf("----------------------------------------------\no indentificador do boi mais magro eh: %d.\nSeu peso eh: %.2f ", idM, vetorp[idM]);
	
	
	
	//Agora faremos a parte 3 do quesito
	printf("\n\n>>Questao 109.3)  o mesmo programa considerando que o numero de bois eh fixo e  igual a dez<<\n");
	
	for(cont = 1; cont <= 10; cont++){            
		printf("digite o peso do boi: ");
		scanf("%f", &vetorp[cont]);
		if (cont == 1){
			gordo = vetorp[cont];
			magro = vetorp[cont];
			idG = cont;
			idM = cont;
		}
		else if (vetorp[cont] > gordo){
		 	gordo = vetorp[cont];
		 	idG = cont;
		}
		else if (vetorp[cont] < magro){
			magro = vetorp[cont];
			idM = cont;
		}
	}
		
	printf("\n");
	
	for(cont = 1; cont <= 10; cont++){
		printf("> %.2f ", vetorp[cont]);
	}
	printf("\n\nO indentificador do boi mais gordo eh: %d\nseu peso eh: %.2f\n",idG, vetorp[idG]);
	printf("------------------------------------------\no indentificador do boi mais magro eh: %d.\nSeu peso eh: %.2f ", idM, vetorp[idM]);
	}
	                            
	
	
