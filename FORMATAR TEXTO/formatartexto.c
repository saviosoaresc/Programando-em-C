#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
int main(){
    char frase[500];
    scanf("%[^\n]", frase);
    int tamanho = strlen(frase);
    
    for(int i=0; i<tamanho; i++){
        if(i==0){
            frase[i] = toupper(frase[i]);
        }
        if(frase[i] == '.' && frase[i+1] == ' '){
            frase[i+2] = toupper(frase[i+2]);
        }
    }
    printf("%s", frase);
}