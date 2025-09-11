/*
    Exercício 3 - Tabuada com for
*/
#include <stdio.h>
int main(){
    int valor;
    //Entrada
    printf("\nEntre com um numero: ");
    scanf("%d",&valor);
    //Processamento e saída
    printf("Tabuada de %d\n", valor);
    for (int contador = 0; contador<=10; contador++)
    {
       printf( "%d X %d = %d\n", valor, contador, valor * contador);     
    }   
    return 0;
}