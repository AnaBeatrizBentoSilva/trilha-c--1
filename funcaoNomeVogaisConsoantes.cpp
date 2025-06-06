#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//Programa: Letras vogais e consoantes
//Ana Beatriz Bento Silva

//Processamento Função
int vogal(char c){
    // Converte o caractere para minúsculo para facilitar a verificação
    c = tolower(c);
    
    // Verifica se o caractere é uma vogal
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main ()
{
    //Declaração das variáveis
    char nome[100];
    
    //Entrada
    printf("Digite um nome: \n");
    fgets(nome, sizeof(nome), stdin);
    
    //Saída
    printf("\nLetras do nome:\n");
    printf("Vogais: ");
    for(int i = 0; nome[i] != '\0'; i++){
        if(nome[i] != ' ' && nome[i] != '\n' && vogal(nome[i])){
            printf("%c ", nome[i]);
        }
    }
    
    printf("\nConsoantes: ");
    for(int i = 0; nome[i] != '\0'; i++){
        if(nome[i] != ' ' && nome[i] != '\n' && !vogal(nome[i])){
            printf("%c ", nome[i]);
        }
    }
        
    system("pause");
    return(0);
}
