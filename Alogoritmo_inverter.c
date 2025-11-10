#include <stdio.h>
#include <locale.h>

//https://www.youtube.com/watch?v=qCxTBPEH8m4

void inverter(char *str) {
    if (*str == '\0') return;
    inverter(str + 1);
    putchar(*str);
}

int main(void) {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    char palavra[100] = "Banana";
    printf("Insira uma palavra: ");
    //scanf("%s",palavra);
    inverter(palavra);
    //printf("%s",palavra);
    return 0;
}