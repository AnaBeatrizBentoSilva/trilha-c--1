#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//Programa: Receber numero e imprimir antecessor e sucessor
//Ana Beatriz Bento Silva

int main ()
{
	//Declaração das variáveis
	int num, sucessor, antecessor;
	
	//Entrada
	printf("Informe um numero: ");
	scanf("%d", &num);
    	
	//Processamento
	antecessor = num - 1;
	sucessor = num + 1;
	
	//Saída
	printf("O antecessor do numero e %d e o sucessor e %d \n", antecessor, sucessor);
	
	system("pause");
	return(0);
}