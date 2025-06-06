#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Programa: Calcular o cubo dos números no vetor
//Ana Beatriz Bento Silva

int main ()
{
    //Declaração das variáveis
    float vetor[5], cubvetor[5];
    
    //Entrada Preenchimento do vetor
    printf("Digite 5 numeros inteiros para preencher o vetor: \n");
    for(int i = 1; i <= 5; i++){
        printf("Numero %d: ", i);
        scanf("%f", &vetor[i]);
    }
    
    //Processamento
    for(int i = 1; i <= 5; i++){
        cubvetor[i] = pow(vetor[i], 3);
    }
            
    //Saída
    printf("\nOs numeros originais e seus cubos são:\n");
    for(int i = 1; i <= 5; i++){
        printf("Numero %d = %3.2f, Cubo = %3.2f\n", i, vetor[i], cubvetor[i]);
    }
        
    system("pause");
    return(0);
}
