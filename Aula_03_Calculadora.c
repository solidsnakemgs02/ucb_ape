#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float valor_a = 0;
    float valor_b = 0; 
    float resultado = 0;
    char operacao;
        
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor_a);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor_b);
    printf("Opções-> [S]Soma | [U]Subtracao | [D]Divisao | [M]Multiplicacao\n");
    printf("Digite a operação: ");

    scanf("%s", &operacao);
    //Realiza o cáculo da média
    if(operacao=='S'){
        resultado = valor_a + valor_b;   
    }else if(operacao=='U'){
        resultado = valor_a - valor_b;
    }
    printf("Sua media foi %f\n", resultado);
    return 0;
}