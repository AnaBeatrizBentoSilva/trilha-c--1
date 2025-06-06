#include <stdio.h>
#include <stdlib.h>

//Programa: loop Do While com teste no final é a validação dos dados de entrada
//Ana Beatriz Bento Silva

int main ()
{
	//Declaração das variáveis
	int num;
	
	//Entrada
	printf("Estrutura de repeticao - DO...WHILE \n");
	
	//Processamento
	do{
		//Entrada
		printf("Digite um numero positvio: \n");
		scanf("%d", &num);
	}while(num < 0);
	
	//Saída
	printf ("Muito bom, voce digitou um numero positivo: %d \n", num);
	
	system("pause");
	return(0);
}