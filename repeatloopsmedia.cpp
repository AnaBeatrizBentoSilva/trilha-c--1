#include <stdio.h>
#include <stdlib.h>

//Programa: loop for média semestral de cada aluno
//Ana Beatriz Bento Silva

int main ()
{
	//Declaração das variáveis
	float nota1, nota2, media;
	int qtde, contador;
	
	//Entrada
	printf("Informe a quantidade de alunos: ");
	scanf("%d", &qtde);
	
	//Processamento
	for(contador = 1; contador <= qtde; contador++){
		//Entrada
		printf("Digite a nota 1: \n");
		scanf("%f", &nota1);
		
		printf("Digite a nota 2: \n");
		scanf("%f", &nota2);
		
		media = (nota1 + nota2)/2;
		
		if(media >= 5){
			//Saída
			printf("O aluno %d FOI APROVADO %.2f ! \n", contador, media);
		}else{
			//Saída
			printf("O aluno %d FOI REPROVADO %.2f ! \n", contador, media);
		}
	}
	system("pause");
	return(0);
}