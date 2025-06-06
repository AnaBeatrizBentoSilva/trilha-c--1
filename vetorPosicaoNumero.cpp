#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Programa: Vetor e produrar valor
//Ana Beatriz Bento Silva

int main ()
{
    //Declaração das variáveis
    int vetor[8], numero, i, encont = 0;
    
    //Entrada Preenchimento do vetor
    printf("Digite 8 numeros inteiros para preencher o vetor: \n");
    for(i = 0; i < 8; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    //Entrada Pesquisa do número no vetor
    printf("Digite um numero para pesquisar no vetor: ");
    scanf("%d", &numero);
    
    //Processamento
    for(i = 0; i < 8; i++){
        if(vetor[i] == numero){
            printf("O numero %d foi encontrado na posicao %d do vetor. \n", numero, i);
            encont = 1;
        }
    }
    
    if(!encont){
        printf("O numero %d nao foi encontrado no vetor. \n", numero);
    }
        
    system("pause");
    return(0);
}
