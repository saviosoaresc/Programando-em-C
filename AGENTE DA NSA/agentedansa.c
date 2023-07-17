#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[200], palavra[30];
    
    scanf("%[^\n]", frase);
    int tamanhoFrase = strlen(frase);
    
    scanf(" %[^\n]", palavra);
    int tamanhoPalavra = strlen(palavra);
    
    int j = 0;
    
    for(int i=0; i<tamanhoFrase; i++){
        if(tolower(frase[i]) == tolower(palavra[j])){
            j++;
        }
    }
    
    if(j == tamanhoPalavra){
        printf("Sim");
    }else printf("Nao");
    
}
