#include <stdio.h>

int main(){
    float valor_a, valor_b, valor_c;
    float media;
    int condicao = 1;

    while (condicao == 1 )
    {
        //Meu código de média      
        printf("Digite tres valores: ");
        scanf("%f %f %f",&valor_a,&valor_b,&valor_c);

        media = (valor_a+valor_b+valor_c)/3;
        printf("Sua media e: %f\n", media);

        printf("Digite 0 para terminar e 1 para continuar: \n");
        scanf("%d", &condicao);
    }

    //O loop termina quando condicao for 0
    printf("\nFim do programa!\n");
    return 0;
}