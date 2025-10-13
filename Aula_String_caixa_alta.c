#include <stdio.h>
#include <string.h>
//+---------------------------
//| Função para converter frases para caixa alta
//+---------------------------
void toUpperFrasef (char txt[]){
    for(int i=0; txt[i] != '\0'; i++){
        txt[i] = toupper((unsigned char)txt[i]);    
    }
}

int main(){
    char frase[100];
        
    printf("Digite uma frase: ");
    fgets(frase,sizeof(frase),stdin);
    printf("Minha frase original: %s\n",frase);
    
    //chamada da função
    toUpperFrasef(frase);    

    printf("Minha frase em caixa alta: %s\n",frase);

    return 0;
}
