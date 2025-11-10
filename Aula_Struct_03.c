#include <stdio.h>
#define N_PESSOAS 2

struct Pessoa {
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    double cpf;
};

int main(){
    struct Pessoa pessoasLidas[N_PESSOAS];

    FILE *f = fopen("pessoas.dat", "rb"); // read binary
    if (f == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    for (int i = 0; i < N_PESSOAS; i++) {
        fread(&pessoasLidas[i], sizeof(struct Pessoa), 1, f);
    }

    fclose(f);

    for (int i = 0; i < N_PESSOAS; i++) {
        printf("Nome: %s", pessoasLidas[i].nome);
        printf("Ano: %d\n", pessoasLidas[i].ano_nascimento);
        printf("Sexo: %c\n", pessoasLidas[i].sexo);
        printf("Altura: %.2f\n", pessoasLidas[i].altura);
        printf("Peso: %.2f\n", pessoasLidas[i].peso);
        printf("CPF: %.0lf\n\n", pessoasLidas[i].cpf);
    }


    return 0;
}

