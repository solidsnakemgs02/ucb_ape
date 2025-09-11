/*
    Exercício 4 - Números pares e ímpares com for
*/
#include <stdio.h>
int main(){
    int valor;
    //Entrada
    printf("\nEntre com um numero: ");
    scanf("%d",&valor);
    //Processamento e saída
    printf("Numeros pares: ");
    for (int contador = 0; contador<=valor; contador++)
    {
        if(contador!=valor){
            printf( "%d, ", contador * 2);
        }else{
            printf( "%d ", contador * 2);
        }     
    }   
    
    printf("\nNumeros impares: ");
    for (int contador = 0; contador<=valor; contador++)
    {
        if(contador!=valor){
            printf( "%d, ", (contador * 2)+ 1);
        }else{
            printf( "%d ", (contador * 2)+ 1);
        }     
    }
    return 0;
}