#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int z = 30;
    int *p;
    int *p2;
    int *p3;

    p = &x; // p recebe o endereço de x
    p2 = &y;
    p3 = &z;


    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor armazenado em p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);
    printf("Endereco de p: %p\n", &p);
    printf("Tamanho do int %d\n", sizeof(x));

    printf("Valor de y: %d\n", y);
    printf("Endereco de y: %p\n", &y);
    printf("Valor armazenado em p2: %p\n", p2);
    printf("Valor apontado por p2: %d\n", *p2);
    printf("Endereco de p2: %p\n", &p2);
    printf("Tamanho do int %d\n", sizeof(y));

    printf("Valor de y: %d\n", z);
    printf("Endereco de y: %p\n", &z);
    printf("Valor armazenado em p2: %p\n", p3);
    printf("Valor apontado por p2: %d\n", *p3);
    printf("Endereco de p3: %p\n", &p3);
    printf("Tamanho do int %d\n", sizeof(z));
    
    return 0;
}