#include <stdio.h>
#include <locale.h>

int main() {
    // Configura a exibição para português
    setlocale(LC_ALL, "Portuguese");

    // Agora você pode usar acentos no printf
    printf("Olá, mundo!\n");
    printf("Essa é uma frase com acentuação.\n");

    return 0;
}