#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Declaração das variáveis
	float peso;
	float altura;
	float imc;
	
	//Entrada das variáveis
	printf("Digite o peso: ");
	scanf("%f", &peso);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	//Processamento
	imc=peso/(altura*altura);
	
	printf("O valor do IMC = %.2f \n\n", imc);
	
	if(imc<=18.4){
		printf("Abaixo do peso");
	} else if(imc>=18.5 && imc<=24.9){
		printf("Peso normal !!!");
	} else if(imc>=25 && imc<=29.9){
		printf("Sobrepeso");
	}else if(imc>=30 && imc<=39.9){
		printf("Obesidade !!!");
	}else{
		printf("Obesidade Grave !!!");
	}
	system("pause");
	return(0);
}