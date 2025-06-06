#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Programa: Idade e quantidade menor de 21 e maior de 50
//Ana Beatriz Bento Silva

int main ()
{
    //Declaração das variáveis
    int idade, menvinum = 0, maiscinq = 0;
    
    //Entrada Idades
    printf("Digite as idades das pessoas (digite -99 para encerrar) \n");
    
    //Processamento
    while(true){
        printf("Idade: ");
        scanf("%d", &idade);
        
        if(idade == -99){
            break;
        }
        
        if(idade < 21){
            menvinum++;
        }else if(idade > 50){
            maiscinq++;
        }
    }
    
    //Saída
    printf("Total de pessoas com menos de 21 anos: %d \n", menvinum);
    printf("Total de pessoas com mais de 50 anos: %d \n", maiscinq);
        
    system("pause");
    return(0);
}
