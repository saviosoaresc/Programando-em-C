#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], vogal[50], consoante[50];
    int vogalCont=0, consoanteCont=0, indiceV=0, indiceC=0;
    
    scanf("%[^\n]", frase);
    int tamanho = strlen(frase);
    
    for(int i=0;i<tamanho;i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            vogalCont++;
            vogal[indiceV] = frase[i];
            indiceV++;
        }else if(frase[i] == ' '){
            continue;
        }else{
          consoanteCont++;
          consoante[indiceC] = frase[i];
          indiceC++;
        } 
    }
    
    for(int i=0;i<indiceV;i++){
        printf("%c", vogal[i]);
    }
    printf("\n");
    for(int i=0;i<indiceC;i++){
        printf("%c", consoante[i]);
    }
}
