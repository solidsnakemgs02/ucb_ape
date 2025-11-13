#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox;
} No;

void push(No **topo, int valor) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro de alocação!\n");
        return;
    }
    novo->dado = valor;
    novo->prox = *topo;
    *topo = novo;
}

int pop(No **topo) {
    if (*topo == NULL) {
        printf("Pilha vazia!\n");
        return -1;
    }
    No *temp = *topo;
    int valor = temp->dado;
    *topo = temp->prox;
    free(temp);
    return valor;
}

void mostrar(No *topo) {
    printf("Topo -> ");
    while (topo != NULL) {
        printf("%d ", topo->dado);
        topo = topo->prox;
    }
    printf("\n");
}

int main() {
    No *topo = NULL; // pilha vazia
    int opcao, valor;

    do {
        printf("\n1 - Push\n2 - Pop\n3 - Mostrar\n0 - Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Valor a empilhar: ");
                scanf("%d", &valor);
                push(&topo, valor);
                break;
            case 2:
                valor = pop(&topo);
                if (valor != -1)
                    printf("Valor desempilhado: %d\n", valor);
                break;
            case 3:
                mostrar(topo);
                break;
        }
    } while(opcao != 0);

    return 0;
}