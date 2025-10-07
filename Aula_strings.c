#include <stdio.h>
#include <string.h>

int main(){

    char nome[20]= "Alexandre";
    int tamanho;

    for(int i=0; i<20;i++){
        printf("%c ",nome[i]);
    }
    tamanho = strlen(nome);
    printf("\nTamanho do nome e %d",tamanho);
    printf("\nFim do programa!");

    return 0;
}