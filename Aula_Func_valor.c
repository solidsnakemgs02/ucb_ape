#include <stdio.h>
#include <locale.h>

void dobrarValorSemRetorno(int n) {
    n = n * 2;
    printf("Dentro da funcao: %d\n", n);
}

int dobrarValorComRetorno(int n) {
    n = n * 2;
    return n;
}

int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int xxx = 5;
    dobrarValorComRetorno(xxx);
    printf("Fora da funcao: %d\n", xxx);
    printf("Valor retornado da função é %d", dobrarValorComRetorno(xxx) );
    return 0;
}