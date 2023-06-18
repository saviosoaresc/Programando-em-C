#include <stdio.h>
int main(){
    int n=0, pivo=0;
    scanf("%d", &n);
    int vet[n], vetMenor[n], vetMaior[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    
    scanf("%d", &pivo);
    
    for(int i=0; i<n; i++){
        if(vet[i] >= pivo){
            vetMaior[i] = vet[i];
        }
        else if(vet[i] < pivo){
            vetMenor[i] = vet[i];
        }
    }
    
    for(int i=0; i<n; i++){
        if(vetMenor[i] != 0){
            printf("%d ", vetMenor[i]);
        }
    }
    printf("\n");
    for(int i=0; i<n; i++){
        if(vetMaior[i] != 0 && vetMaior[i] > 1 && vetMaior[i] < 9999){
            printf("%d ", vetMaior[i]);
        }
    }
    
}