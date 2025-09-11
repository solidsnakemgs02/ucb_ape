#include <stdio.h>

int main(void) {
    int idade;
    char nome[20];
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Qual o seu nome? ");
    scanf("%s", &nome);
    printf("Sua idade e: %d\n", idade);
    printf("E seu nome e %s\n", nome);
    return 0;
}