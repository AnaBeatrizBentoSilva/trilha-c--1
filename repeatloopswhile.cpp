#include <stdio.h>
#include <stdlib.h>

//Programa: loop While com teste no início
//Ana Beatriz Bento Silva

int main ()
{
	//Declaração das variáveis
	int cont;
	cont = 1;
	
	//Processamento
	while(cont <= 5){
		//Saída
		printf("%d ", cont);
		cont=cont+1;
	}
	
	system("pause");
	return(0);
}