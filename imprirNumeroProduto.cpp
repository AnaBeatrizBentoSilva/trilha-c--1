#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//Programa: Imprimir os números e o produto
//Ana Beatriz Bento Silva

int main ()
{
	//Declaração das variáveis
	int num, produto = 1;
	
	//Entrada
	printf("Digite um numero: ");
	scanf("%d", &num);
    	
	//Processamento
	printf("Numros de 1 ate %d: \n", num);
	for(int i = 1; i <= num; i++){
		//Saída
		printf("%d ", i);
		produto *= i;
	}
	
	printf("\nProduto dos numros de 1 ate %d: %d\n", num, produto);
		
	system("pause");
	return(0);
}