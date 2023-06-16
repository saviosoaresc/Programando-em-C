#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char frase[50], fraseCodificada[50];
    
    scanf("%[^\n]", frase);
    int tamanho = strlen(frase);
    
    for(int i=0; i<tamanho;i++){
        char caractere = tolower(frase[i]);
        for(int j=0; j<tamanho;j++){
            if(caractere == 'a' || caractere == 'e'|| caractere == 'i'|| caractere == 'o'|| caractere == 'u'){
                fraseCodificada[j] = 'v';
            }else if(caractere == ' '){
                fraseCodificada[j] = ' ';
            }else fraseCodificada[j] = 'c';
        }
        printf("%c", fraseCodificada[i]);
    }
}

