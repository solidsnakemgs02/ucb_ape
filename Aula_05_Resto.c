#include <stdio.h>

int main() {
    int a; 

    printf("Insira um numero:");
    scanf("%d",&a);
    //resto = a%2;
    if (a%2 != 1){
        printf("O numero informado e par.");
    }else{
        printf("O numero informado e impar.");
    }
    return 0;
}