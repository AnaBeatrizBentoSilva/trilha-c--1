#include <stdio.h>
#include <stdlib.h>

//Programa: loop Do While com teste no final
//Ana Beatriz Bento Silva

int main ()
{
	//Declaração das variáveis
	int cont;
	cont = 1;
	
	//Processamento
	do{
		//Saída
		printf("%d ", cont);
		cont=cont+1;
	}
	while(cont <= 5);
	
	system("pause");
	return(0);
}