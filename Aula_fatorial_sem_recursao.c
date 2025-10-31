#include <stdio.h>
#include <locale.h>

int fatorialSemRecursao(int n){
    int resultado = 1;
    if (n < 0){
        resultado = -1; //indicação de erro
    }else{
        for (int i = 1; i <= n; i++) {
            //resultado *= i; // multiplica o acumulador pelo valor atual de i
            resultado = resultado * i;
        }
    }   
    return resultado;
}

int fatorialComRecursao(int n){
    if (n < 0){
        return -1; //indicação de erro
    }
    if (n == 0 || n == 1){
        return 1;
    }else{
        return n * fatorialComRecursao(n-1);
    }
}

int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int numero; 
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d",&numero);

    printf("O número digitado foi %d \n",numero);
    printf("O resultado do fatorial desse número é %d \n",fatorialSemRecursao(numero));
    printf("O resultado do fatorial desse número com recursão é %d \n",fatorialComRecursao(numero));
    
    return 0;
}