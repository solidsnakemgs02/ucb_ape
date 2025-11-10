#include <stdio.h>

int main(){

    int i = 5;

     for(int contador=0; contador<=10; contador++){
        printf("O valor da contagem e %d\n",contador);
        i = i + 1;
        if (i == 6) {
            break;
        }

    }

    return 0;
}