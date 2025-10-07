#include <stdio.h>
#include <string.h>
int main(){
    char nome [20];
    char sobrenome[50];
    char completo[70];
    printf("\n Digite o seu nome: ");
    scanf("%s",nome);
    printf("\n Digite o seu sobrenome: ");
    scanf("%s",sobrenome);

    strcpy(completo,nome); // Cópia da variável nome 
    strcat(completo," "); // Acrescenta espaço no final da variável
    strcat(completo,sobrenome); // Acrescenta o sobrenome
    strcat(completo, " Guimaraes");

    printf("\n O Primeiro nome: %s", nome);
    printf("\n O sobrenome: %s", sobrenome);
    printf("\n Tamanho do nome: %d",strlen(completo));

    if(toupper(nome[0]) == 'A' ){
        printf("\n Sim, inicia com A.");
    }else{
        printf("\n Nao inicia com A.");
    }
    printf("\n O seu nome completo e: %s",completo);
    return 0;

}