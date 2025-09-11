#include <stdio.h>
#include <string.h>

int main(){

    float valor_a, valor_b, valor_c;
    float media;

    //Inicializa a variável de controle
    int contador = 1; 
    
    while (contador <= 3) { 
        printf("Digite tres valores: ");
        scanf("%f %f %f",&valor_a,&valor_b,&valor_c);

        media = (valor_a+valor_b+valor_c)/3;
        printf("Sua media e: %f\n", media);

        contador++;
    }
    
    // O loop termina quando contador se torna 6
    printf("\nFim do loop!\n");

    return 0;

}