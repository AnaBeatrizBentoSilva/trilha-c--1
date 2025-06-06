#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Vetor

int main(){
	
	//Declaração de variaveis
	int vet[10];
	int i;
	
	//Entrada
	for(i=0; i<10; i++){
		printf("\nDigite um valor inteiro pos %d: \n", i);
		scanf("%d", &vet[i]);
	}
	
	//Saída
	for(i=0; i<10; i++){
		printf("%d ", vet[i]);
	}
	
	system("pause");
	return 0;
}