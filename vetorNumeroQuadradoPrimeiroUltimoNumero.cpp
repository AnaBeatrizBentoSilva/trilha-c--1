#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Programa: Preencher vetor, imprimir vetor, quadrado, primeiro e último número
//Ana Beatriz Bento Silva

int main ()
{
    //Declaração das variáveis
    int qtde;
    
    //Entrada Preenchimento do vetor
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &qtde);
    
    //Processamento Se o tamanho é válido
    if (qtde <= 0){
        printf("Tamanho invalido. Deve ser maior que 0.\n");
        return 1;
    }
    
    // Aloca memória dinamicamente para o vetor
    // (int*) - Faz o cast do ponteiro void* retornado por malloc para int*.
    // malloc(tamanho * sizeof(int)) - Aloca memória suficiente para 'tamanho' elementos do tipo int.
    // tamanho * sizeof(int) - Calcula o total de bytes necessários para armazenar o vetor.
    int* vetor = (int*)malloc(qtde * sizeof(int));
    if(vetor == NULL){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    
    int* quadvetor = (int*)malloc(qtde * sizeof(int));
    if(quadvetor == NULL){
        printf("Erro ao alocar memoria.\n");
        free(vetor);
        return 1;
    }
    
    //Entrada
    printf("Digite %d numeros inteiros para preencher o vetor:\n", qtde);
    for (int i = 0; i < qtde; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    //Processamento
    for (int i = 0; i < qtde; i++) {
        quadvetor[i] = pow(vetor[i], 2);
    }
    
    //Processamento e Saída
    printf("\nOs numeros do vetor sao:\n");
    for(int i = 0; i < qtde; i++){
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
    
    printf("\nOs quadrados dos numeros do vetor sao:\n");
    for(int i = 0; i < qtde; i++){
        printf("O quadrado do vetor[%d] = %d\n", i, quadvetor[i]);
    }
    
    if (qtde > 0){
        printf("\nO primeiro numero do vetor: %d\n", vetor[0]);
        printf("\nO ultimo numero do vetor: %d\n", vetor[qtde-1]);
    }
    
    // Libera a memória alocada
    free(vetor);
    free(quadvetor);
        
    system("pause");
    return(0);
}
