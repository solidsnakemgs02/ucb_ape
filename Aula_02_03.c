#include <stdio.h>

int main(void) {
    int nota1;
    int nota2;
    int nota3;
    int media;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);
    //Realiza o cáculo da média
    media = (nota1+nota2+nota3)/3;
    printf("Sua media foi %d\n", media);
    return 0;
}