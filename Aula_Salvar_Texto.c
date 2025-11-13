#include <stdio.h>

int main() {
    FILE *f = fopen("dados.txt","w"); //cria arquivo ou sobrescreve
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    char nome[100];
    int idade;

    printf("Digite um nome: ");
    fgets(nome,100,stdin);

    printf("Digite a idade: ");
    scanf("%d",&idade);

    fprintf(f, "Nome: %sIdade: %d\n", nome, idade);
    //printf("Nome: %sIdade: %d\n", nome, idade);

    fclose(f);

    printf("Dados gravados com sucesso.\n");
    return 0;
}