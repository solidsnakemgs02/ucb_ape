#include <stdio.h>
#define TAM 5
int main(){
    int numeros[TAM];
    float soma,media;
    int qt_impares = 0, qt_pares = 0, n_maior = 0, n_menor = 0, numero, indice = -1;
    
    //Captura valores 
    printf("Insira 10 valores em sequencia:");
    for(int i=0; i<TAM;i++){
        printf("\nInsira o de numero %d: ",i);
        scanf("%d",&numeros[i]);
    }

    //Exibe valores e calcula: soma, maior, menor, qt_impares, qt_pares 
    printf("\nOs numeros inseridos sao: ");
    for(int i=0; i<TAM;i++){
        printf("%d ",numeros[i]);
        
        //Conta pares e ímpares
        if(numeros[i]%2==0){
            qt_pares++;
        } else{
            qt_impares++;
        }
        
        //Verifica maior
        if(n_maior<numeros[i]){
            n_maior = numeros[i];
        }
        
        //Verifica menor
        if(n_menor>numeros[i]){
            n_menor = numeros[i];
        }
               
        soma+= numeros[i];
    }

    //O maior número digitado.
    printf("\nMaior numero digitado: %d",n_maior);
    
    //O menor número digitado.
    printf("\nMenor numero digitado: %d",n_menor);
    
    //A quantidade de números pares.
    printf("\nQuantidade de numeros pares: %d",qt_pares);
    
    //A quantidade de números ímpares.
    printf("\nQuantidade de numeros impares: %d",qt_impares);
    
    //A média aritmética dos números.
    media = soma/TAM;
    printf("\nA media e: %0.2f",media);
 

    //Insere numero para ser procurado no vetor.
    printf("\nDigite um numero para verificar se esse numero existe no vetor: ");
    scanf("%d",&numero);

    for(int i=0; i<TAM;i++){
        if(numero==numeros[i]){
            indice = i;
        }       
    }   

    //Mostra posicao se achou o numero no vetor
    if(indice==-1){
        printf("O numero digitado nao existe no vetor.");
    }else{
        printf("\nA posicao (indice) do numero e: %d", indice);
    }
    
    printf("\nFim do programa!");

    return 0;
}