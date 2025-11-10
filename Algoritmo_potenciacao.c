#include <stdio.h>
#include <locale.h>
#include <math.h>

int potencia(int base, int exp) {
    if (exp == 0)
        return 1;
    else
        return base * potencia(base, exp - 1);
}

int main(void) {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int numero;
    int expoente;
    int resultado;

    printf("Insira um número: ");
    scanf("%d",&numero);
    printf("Insira a potência para elevar o número inserido: ");
    scanf("%d",&expoente);

    resultado = potencia(numero,expoente);
    //resultado = pow(2,5);

    printf("O resultado da operação é %d\n", resultado);
    
    return 0;
   
}