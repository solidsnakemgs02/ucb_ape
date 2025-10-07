#include <stdio.h>
#define TAM 3
int main(){
    int valores[TAM];
    int uso_memoria;
    int tamanho_vetor;
    
    printf("\nOla! O sistema vai pedir 4 valores.");
    for(int i=0; i<TAM;i++){
        printf("\nInsira um valor: ");
        scanf("%d",&valores[i]);
    }
    printf("\nOs valores armazenados sao: ");
    for(int i=0; i<TAM;i++){
        printf("%d ",valores[i]);
    }
    
    printf("\nOs valores armazenados sao: ");
    for(int i=TAM-1; i>-1;i--){
        printf("%d ",valores[i]);
    }

    uso_memoria = sizeof(valores);
    tamanho_vetor = sizeof(valores)/sizeof(valores[0]);
    printf("\n%d Tamanho de espaco em memoria em bytes",uso_memoria);
    printf("\n%d Numero de elementos",tamanho_vetor);
    printf("\nFim do programa!");

    return 0;
}