#include <stdio.h>
#include <locale.h>

void dobrarValor(int *n) {
    *n = *n * 2;
    printf("Dentro da funcao: %d\n", *n);
}

int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int x = 5;
    dobrarValor(&x);
    printf("Fora da funcao: %d\n", x);
    return 0;
}