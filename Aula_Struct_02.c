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

int main() {
    struct Pessoa pessoas[N_PESSOAS];

    for(int i = 0; i < N_PESSOAS; i++) {
        printf("Cadastro da pessoa %d\n", i+1);

        printf("Nome: ");
        fflush(stdin);
        fgets(pessoas[i].nome, 100, stdin);

        printf("Ano de nascimento: ");
        scanf("%d", &pessoas[i].ano_nascimento);

        printf("Sexo (M/F): ");
        scanf(" %c", &pessoas[i].sexo); 

        printf("Altura (em metros): ");
        scanf("%f", &pessoas[i].altura);

        printf("Peso (em kg): ");
        scanf("%f", &pessoas[i].peso);

        printf("CPF: ");
        scanf("%lf", &pessoas[i].cpf);

        printf("\n");
        fflush(stdin);
    }

    printf("===== LISTA DE PESSOAS =====\n");
    for(int i = 0; i < N_PESSOAS; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Nome: %s", pessoas[i].nome);
        printf("Ano de nascimento: %d\n", pessoas[i].ano_nascimento);
        printf("Sexo: %c\n", pessoas[i].sexo);
        printf("Altura: %.2f\n", pessoas[i].altura);
        printf("Peso: %.2f\n", pessoas[i].peso);
        printf("CPF: %.0lf\n\n", pessoas[i].cpf);
    }   
    
    /*
    FILE *f = fopen("pessoas.dat", "wb"); // write binary
    if (f == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    for (int i = 0; i < N_PESSOAS; i++) {
        fwrite(&pessoas[i], sizeof(struct Pessoa), 1, f);
    }

    fclose(f);
    printf("Dados salvos com sucesso!\n");
    */
   
    return 0;
}