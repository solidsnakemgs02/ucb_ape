#include <stdio.h>
#define TAM 5
int main(){
    float notas[TAM];
    float soma,media;
       
    printf("\nOla! O sistema vai pedir 5 notas de alunos.");
    for(int i=0; i<TAM;i++){
        printf("\nInsira um valor: ");
        scanf("%f",&notas[i]);
    }
    printf("\nAs notas armazenadas sao: ");
    for(int i=0; i<TAM;i++){
        printf("%0.2f ",notas[i]);
        soma+= notas[i];
    }
    media = soma/TAM;
    printf("\nA media e: %0.2f",media);
 
    printf("\nFim do programa!");

    return 0;
}