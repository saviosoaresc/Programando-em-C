#include <stdio.h>
#include <string.h>
int main(){
    char frase[50], frase2[50];
    
    scanf("%[^\n]", frase);
    int tamanho = strlen(frase);
    
    scanf(" %[^\n]", frase2);
    int tamanho2 = strlen(frase2);
    int vetRepeticoes[tamanho2];
    
    memset(vetRepeticoes, 0, sizeof(vetRepeticoes));
    
    // for(int i = 0; i < tamanho2; i++) vetRepeticoes[i] = 0;
    
    for(int i=0; i<tamanho;i++){
        for(int j=0; j<tamanho2;j++){
            if(frase2[j] == frase[i]){
                vetRepeticoes[j]++;
            }
        }
    }
    for(int i=0; i<tamanho2;i++){
        printf("%d", vetRepeticoes[i]);
        if(i != tamanho2 - 1) printf(" ");
    }
    printf("\n");
}

