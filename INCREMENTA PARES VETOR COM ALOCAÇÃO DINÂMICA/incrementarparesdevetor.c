#include <stdio.h>
#include <stdlib.h>
int main(){
    int *vet, n;
    scanf("%d", &n);
    vet = (int *) malloc(sizeof(int) * n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    
    
    for(int i=0; i<n; i++){
        if(vet[i] % 2 == 0){
            vet[i]++;
        }
        printf("%d ", vet[i]);
    }
    
    free (vet);
}