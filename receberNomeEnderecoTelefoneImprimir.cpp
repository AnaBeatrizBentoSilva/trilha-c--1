#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Programa: Ler nome, endereço, telefone
//Ana Beatriz Bento Silva

int main ()
{
	//Declaração das variáveis
	char nome[30], endereco[100], telefone[9];
	
	//Entrada
	printf("Informe o nome: ");
	gets(nome);
	
	printf("Informe o endereco: ");
	gets(endereco);
	
	printf("Informe o telefone: ");
	gets(telefone);
    
    //Saída
    printf("Nome: %s \nEndereco: %s \nTelefone: %s \n", nome, endereco, telefone );
	system("pause");
	return(0);
}