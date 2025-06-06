#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Programa: Verificar se o número está entre 100 e 200
//Ana Beatriz Bento Silva

int main ()
{
    //Declaração das variáveis
    int num;
    
    //Entrada
    printf("Digite um numero: \n");
    scanf("%d", &num);
    
    //Processamento
        if(num >= 100 && num <= 200){
            //Saída
            printf("Voce digitou um numero entre 100 e 200.\n");
        }else{
            //Saída
            printf("Voce digitou um numero fora da faixa entre 100 e 200.\n");
        }
    
    system("pause");
    return(0);
}
