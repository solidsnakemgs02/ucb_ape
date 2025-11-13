#include <stdio.h>

int main() {
    FILE *f = fopen("dados.txt","r"); //Abre como leitura
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    char linha[200];

    while (fgets(linha,sizeof(linha),f) != NULL)
    {
        printf("%s",linha);
    }
    
    fclose(f);
    return 0;
}