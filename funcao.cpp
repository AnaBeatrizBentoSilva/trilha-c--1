#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Programa: Criação de função
//Ana Beatriz Bento Silva

//Processamento Função
int calcResult(float n1, float n2, float n3){
    float resultFloat = (n1 * n1)+ n2 + n3;
    int resultInt = (int)resultFloat;
    return resultInt;
}

int main ()
{
    //Declaração das variáveis
    float n1, n2, n3;
    
    //Entrada
    printf("Digite o valor de n1: \n");
    scanf("%f", &n1);
    
    printf("Digite o valor de n2: \n");
    scanf("%f", &n2);
    
    printf("Digite o valor de n3: \n");
    scanf("%f", &n3);
    
    //Saída
    int result = calcResult(n1, n2, n3);
    printf("O resultado e: %d\n", result);
        
    system("pause");
    return(0);
}
