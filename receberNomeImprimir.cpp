#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//Programa: Receber nome e imprimir
//Ana Beatriz Bento Silva

int main ()
{
	//Declaração das variáveis
	char nome[15];
	int contador;
	
	//Entrada
	printf("Informe o nome: ");
	gets(nome);
    	
	//Processamento
	for(contador = 1; contador <= 10; contador++){
		//Saída
		printf("%s \n", nome);
	}
	
	system("pause");
	return(0);
}