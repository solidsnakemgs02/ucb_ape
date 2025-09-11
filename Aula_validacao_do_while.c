/*
    Exercício 2 - Validacao
*/
#include <stdio.h>
int main(){
    int idade;
    do{
        printf("\nDigite sua idade: ");
        scanf("%d",&idade);
        if (idade<0 || idade > 120){
            printf("Idade invalida. Digite novamente.");
        }
    }while(idade<0 || idade > 120);
    printf("Idade valida. Fim de programa.");
    return 0;
}