                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
/*10 QUESITO 0. Escreva um programa que receba a velocidade máxima em uma avenida e a
velocidade com que um motorista estava dirigindo nela. Calcule a multa que o
motorista vai receber, considerando que são pagos R$ 5,00 por cada km/h que 
estiver acima da velocidade permitida (considere apenas números inteiros). Se 
a velocidade do motorista estiver dentro do limite, o programa deve informar que 
não há multa*/

#include <stdio.h>

int main (){
	int velocidade_max, velocidade_do_condutor, multa = 0;
	printf("informe a velocidade maxima permitida\n");
	scanf("%d", &velocidade_max);
	printf("Informe a velocidade dirigida pelo condutor\n");
	scanf("%d", &velocidade_do_condutor);
		if (velocidade_do_condutor <= velocidade_max){
			printf("Velocidade dentro dos limites permitos.\n ");
			}
		else{
			velocidade_do_condutor -= velocidade_max;
			multa = (velocidade_do_condutor * 5);
	printf("Foram ultrapassados %d km\nA multa eh equivalente a R$%d,00", velocidade_do_condutor, multa);
			
		}
}
