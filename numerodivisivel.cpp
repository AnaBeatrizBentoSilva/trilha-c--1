#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//Programa: Numero divisível 10, 5, 2
//Ana Beatriz Bento Silva

int main ()
{
	//Declaração das variáveis
	int num;
	
	//Entrada
	printf("Digite um numero: ");
	scanf("%d", &num);
    	
	//Processamento
	if(num % 10 == 0){
		//Saída
		printf("O numero %d e divisivel por 10.\n", num);
	}
	
	if(num % 5 == 0){
		//Saída
		printf("O numero %d e divisivel por 5.\n", num);
	}
	
	if(num % 2 == 0){
		//Saída
		printf("O numero %d e divisivel por 2.\n", num);
	}
	
	if(num % 10 != 0 && num % 5 != 0 && num % 2 != 0){
		//Saída
		printf("O numero %d nao e divisivel por 10, 5, 2.\n", num);
	}
		
	system("pause");
	return(0);
}