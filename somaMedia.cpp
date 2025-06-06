#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//Programa: Ler valores soma e média
//Ana Beatriz Bento Silva

int main ()
{
	//Declaração das variáveis
	int num, soma = 0, contador = 0;
	float media;
	
	//Entrada
	printf("Digite valor inteiro(digite -99 para parar): ");
	while(true){
		scanf("%d", &num);
		
		if(num == -99){
			break;
		}
		
		soma += num;
		contador++;
	}
	
	if(contador >0){
		media = (float)soma/contador;
		printf("Soma dos numros lidos: %d\n", soma);
		printf("Media dos numros lidos: %.2f\n", media);
	}else{
		printf("Nenhum numero foi lido: \n");
	}
		
	system("pause");
	return(0);
}