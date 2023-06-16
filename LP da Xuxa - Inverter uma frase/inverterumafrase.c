#include <stdio.h>
#include <string.h>
int main(){
    char fraseO[100], fraseI[100];
    
    scanf("%[^\n]", fraseO);
    int tamanho = strlen(fraseO);
    
    for(int i=tamanho-1, j = 0; i>=0;i--, j++){
        fraseI[j] = fraseO[i];
    }
    printf("%s", fraseI);
}