#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Declaração das variáveis
	int n1;
	int n2;
	
	//Entrada das variáveis
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	//Processamento
	if(n1 > n2){
		printf("A ordem crescente dos numeros é: %d", n2 );
		printf(" %d", n1 );
	}
	else
	{
		printf("A ordem crescente dos numeros é: %d", n1 );
		printf(" %d", n2 );
	}
	
	//Saída
	system("pause");
	return(0);
}