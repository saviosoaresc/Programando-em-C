#include <stdio.h>
#include <string.h>
int main(){
    char frase[100];
    
    scanf("%s", frase);
    int tamanho = strlen(frase);
    
    for(int i=0; i<tamanho-1;i++){
            printf("%c-", frase[i]);
    }
    for(int i=tamanho-1;i<tamanho; i++){
        printf("%c", frase[i]);
    }
}

