/* vulneravel.c
 * Demonstração: leitura sem limite pode sobrescrever variáveis vizinhas.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char nome[5];           // espaço para 4 chars + '\0'
    int idade = 30;         // variável que poderá ser corrompida
    char marcador[8] = "MARCAR"; // para visualizar alteração

    printf("Antes da leitura:\n");
    printf("  endereco nome:   %p\n", (void*)nome);
    printf("  endereco idade:  %p\n", (void*)&idade);
    printf("  endereco marcador:%p\n", (void*)marcador);
    printf("  idade = %d\n", idade);
    printf("  marcador = %s\n\n", marcador);

    printf("Digite um nome (muitos caracteres para causar overflow): ");
    /* leitura sem limite -- perigoso pro propósito didático */
    scanf("%s", nome);

    printf("\nDepois da leitura:\n");
    printf("  nome = %s\n", nome);
    printf("  idade = %d\n", idade);
    printf("  marcador = %s\n", marcador);

    return 0;
}