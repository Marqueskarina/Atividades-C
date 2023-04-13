#include <stdio.h>

main(){
	int a, b;
	int *ponteiroA, *ponteiroB;
	
	printf("Valor A: ");
	scanf(" %d", &a);
	printf("\nValor B: ");
	scanf(" %d", &b);

	//ponteiros recebem o endereço das variáveis a e b
	ponteiroA = &a;
	ponteiroB = &b;
	
	//comparando qual endereço é maior e após a comparação imprimindo o valor que está nomaior endereço
	if (ponteiroA > ponteiroB){
		printf("Conteúdo do maior endereço: %d\n", *ponteiroA);
	}
	else{
	printf("Conteúdo do maior endereço: %d\n", *ponteiroB);
	}	
}	
	
	
	
