#include <stdio.h>
#include <locale.h>

typedef struct {
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    double cpf;
}Pessoa;

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    Pessoa p1 = {"Alexandre Silva dos Santos",1973,'M',1.78,92.0,61020974168};
    //Pessoa pessoas[5];

    printf("O nome da pessoa é %s\n", p1.nome);
    printf("O ano de nascimento é %d\n", p1.ano_nascimento);
    printf("O sexo é %c\n", p1.sexo);
    printf("A altura é %f\n", p1.altura);
    printf("O peso é %f\n", p1.peso);
    printf("O cpf é %0.0f\n", p1.cpf);

    return 0;
}