#include <stdio.h>
#include <string.h>
int main(){
    char frase[100], indice=0, fraseMod[200];
    
    fgets(frase, 100, stdin);
    int tamanho = strlen(frase);

    for(int i=0; i<tamanho;i++){
        if(frase[i]!='\n'){
            printf("%c", frase[i]);
        }else{
            printf(" ");
        }
        if(frase[i] == ' ' || i == tamanho-1){
            for(int j=indice; j<=i; j++){
                printf("%c", frase[j]);
            }
            indice = i+1;
        }
    }
    
}

