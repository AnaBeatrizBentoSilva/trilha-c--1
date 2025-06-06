#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Declaração das variáveis
	float nota1;
	float nota2;
	float media;
	
	//Entrada das variáveis
	printf("Digite a primeiran nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	//Processamento
	media=(nota1+nota2)/2;
	
	if(media >= 5){
		//Saída
		printf("Aprovado \n\n\n ");
	}
	else
	{
		//Saída
		printf("Reprovado \n\n\n ");
	}
	
	system("pause");
	return(0);
}