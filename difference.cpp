#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Declaração das variáveis
	int np1;
	int np2;
	int result;
	
	//Entrada das variáveis
	printf("Digite a nota da NP1: ");
	scanf("%d", &np1);
	
	printf("Digite a nota da NP2: ");
	scanf("%d", &np2);
	
	//Processamento
	if(np1 > np2){
		result = np1 - np2;
	}
	else
	{
		result = np2 - np1;
	}
	
	//Saída
	printf("O resultado e %d \n\n\n ", result);
	system("pause");
	return(0);
}