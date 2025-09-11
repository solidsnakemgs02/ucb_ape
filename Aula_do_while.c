/*
Faça um programa que leia dois número reais (notas) - Perguntar Nota A e Nota B
Cálcular a média e imprimir 
Perguntar se deseja encerrar ou calcular novamente (0 - termina e 1 - continua)
*/
#include <stdio.h>
int main(){
    int resposta;
    float nota_a, nota_b;

    do{
        printf("Entre com a nota a: ");
        scanf("%f",&nota_a);
        printf("Entre com a nota b: ");
        scanf("%f",&nota_b);
        printf("Sua media e %f\n", (nota_a + nota_b)/2);
        printf("Deseja finalizar (0 - termina e 1 - continua): ");
        scanf("%d",&resposta);
    }while(resposta==1);
               
    return 0;
}