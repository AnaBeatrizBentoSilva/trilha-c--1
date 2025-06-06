#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Programa: Dois vetores imprimir e somar(mesma posição) números
//Ana Beatriz Bento Silva

int main ()
{
    //Declaração das variáveis
    int primvetor[5], segvetor[5], soma[5];
    
    //Entrada Preenchimento do vetor
    printf("Digite 5 numeros inteiros para preencher o primeiro vetor: \n");
    for(int i = 0; i < 5; i++){
        printf("Primeiro vetor[%d]: ", i);
        scanf("%d", &primvetor[i]);
    }
    
    printf("Digite 5 numeros inteiros para preencher o segundo vetor: \n");
    for(int i = 0; i < 5; i++){
        printf("Segundo vetor[%d]: ", i);
        scanf("%d", &segvetor[i]);
    }
            
    //Processamento e Saída
    printf("\nSoma das posições correspondentes:\n");
    for(int i = 0; i < 5; i++){
        soma[i] = primvetor[i] + segvetor[i];
        printf("Soma do primeiro vetor[%d] + segundo vetor[%d] = %d+%d=%d\n", i, i, primvetor[i], segvetor[i], soma[i]);
    }
        
    system("pause");
    return(0);
}

