#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[100],fraseModi[100], letra;
    scanf("%[^\n]", frase);
    int tamanho = strlen(frase);
    scanf(" %c", &letra);
    for(int i=0; i<tamanho; i++){
        if(letra == 'm'){
            fraseModi[i] = tolower(frase[i]);
        }else fraseModi[i] = toupper(frase[i]);
        
        printf("%c", fraseModi[i]);
    }
}