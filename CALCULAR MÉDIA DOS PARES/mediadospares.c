#include <stdio.h>
int main(){
    int n, index=0;
    float soma=0;
    scanf("%d", &n);
    int vet[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    
    for(int i=0; i<n; i++){
        if(vet[i] % 2 == 0){
            soma += vet[i];
            index++;
        }
    }
    float media = soma / index;
    printf("%.2f", media);
}