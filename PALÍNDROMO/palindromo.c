#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100];
    scanf("%[^\n]", frase);
    int tamanho = strlen(frase);
    int verificacao;
    
    for(int i=0; i<tamanho; i++){
        frase[i] = tolower(frase[i]);
    }
    for(int i=0, j=tamanho-1; i<j; i++, j--){
        while(!isalpha(frase[i])){
            i++;
        }
        while(!isalpha(frase[j])){
            j--;
        }
        if(frase[i] == frase[j]){
            verificacao=1;
        }else verificacao=0;
    }
    if(verificacao == 1){
        printf("SIM");
    }else printf("NAO");
}

