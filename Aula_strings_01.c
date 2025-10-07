#include <stdio.h>
#include <string.h>

int main(){

    char primeiro_nome[30];
    char segundo_nome[5];
    printf("Digite o primeiro nome: \n");
    //scanf("%s", primeiro_nome);
    fgets(primeiro_nome, sizeof(primeiro_nome), stdin);
            
    /*
    printf("Digite o segundo nome: \n");
    scanf("%s", segundo_nome);
    */
    
    printf("O primeiro nome digitado foi %s\n", primeiro_nome);
    //printf("O segundo nome digitado foi %s\n", segundo_nome);
    
    
    return 0;
}