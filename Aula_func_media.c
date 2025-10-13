#include <stdio.h>
#include <math.h>
//Função de cálculo da média sem ser genérica
float pitagoras(float v1, float v2){
    return sqrt(pow(v1,2) + pow(v2,2));
}

int main(){

    float a,b,c;

    printf("Digite o valor do lado A: ");
    scanf("%f",&a);
    printf("Digite o valor do lado B: ");
    scanf("%f",&b);
   
    c = pitagoras(a,b);

    printf("media do lado c: %f\n", c);

    return 0;
}