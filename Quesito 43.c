/* Fazer uma função situacao_aluno que:
a. recebe como parâmetros: média final do aluno (0 a 10), número de 
faltas e quantidade de horas-aula no semestre
b. retorna 1 se o aluno foi aprovado, de acordo com os critérios da 
faculdade, e 0 caso contrário. Critérios: média final maior ou igual a 60 
e frequência maior ou igual a 75%. 
c. Fazer o teste da chamada desta função no main, recebendo valores 
relativos a um aluno e informando se ele foi aprovado ou não.*/


#include <stdio.h>
// criando função
int situacao_aluno( float media, int faltas, int total_de_aulas){
	int frequencia = 0;
	frequencia = total_de_aulas-(faltas*100)/total_de_aulas; //Calculo para sabermos o percentual de frequencia
	if((frequencia >= 75) && (media >= 6.0)){
		return 1;
	}else{
		return 0;
	}
}

main(){
	float media = 0;
	int a, faltas, aulastotal;
	
	printf("Informe a media do aluno\n");
	scanf("%f", &media);
	printf("Informe aquantidade total de aulas\n");
	scanf("%d", &aulastotal);
	printf("Informe o total de faltas\n");
	scanf("%d", &faltas);
	a = situacao_aluno(media, faltas, aulastotal); // fazendo a chamada da função.
	printf(">>Resultado: %d", a);
}
