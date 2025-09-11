#include <stdio.h>

int main(void) {
    int notas[5];
    int media;

    printf("Digite a primeira nota: ");
    scanf("%d", &notas[0]);
    printf("Digite a segunda nota: ");
    scanf("%d", &notas[1]);
    printf("Digite a terceira nota: ");
    scanf("%d", &notas[2]);
    //Realiza o cáculo da média
    media = (notas[0]+notas[1]+notas[2])/3;
    printf("Sua media foi %d\n", media);
    return 0;
}