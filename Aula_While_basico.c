#include <stdio.h>
int main(){

    int contador=0;
        
    while (contador<=10)
    {
       printf("Sala %d\n", (2 * contador) + 1);
       contador = contador + 1;
    }   
    
    return 0;
}