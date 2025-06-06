#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//Programa: Algoritmo leia os limites inferior e superior de um intervalo
//Ana Beatriz Bento Silva

int main ()
{
	//Declaração das variáveis
	int limitInfer, limitSup, soma = 0;
	
	//Entrada
	printf("Digite o limite inferior do intervalo: ");
	scanf("%d", &limitInfer);
	
	printf("Digite o limite superior: ");
	scanf("%d", &limitSup);
    	
	//Processamento
	printf("Numeros pares no intervalo aberto (%d, %d): \n", limitInfer, limitSup);
	for (int i = limitInfer + 1; i < limitSup; i++){
		if (i % 2 == 0){
			printf("%d ", i);
			soma += i;
		}
	}
	
	//Saída
	printf("\nSomatorio dos numeros pares: %d \n", soma);
	
	system("pause");
	return(0);
}