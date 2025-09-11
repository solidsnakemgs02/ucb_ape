/*
    Exercício 1 - Tabuada com while
*/
#include <stdio.h>
int main(){
    int contador=0;
    int valor;
    //Entrada
    printf("\nEntre com um numero: ");
    scanf("%d",&valor);
    //Processamento e saída
    printf("Tabuada de %d\n", valor);
    while (contador<=10)
    {
       printf( "%d X %d = %d\n", valor, contador, valor * contador);
       //contador = contador + 1;
       contador++;
    }   
     return 0;
}