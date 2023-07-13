#include <stdio.h>
#include <stdlib.h>
int main(){
    int *vet1, *vet2, *vetSoma, n;
    scanf("%d", &n);
    vet1 = (int *) malloc(sizeof(int) * n);
    vet2 = (int *) malloc(sizeof(int) * n);
    vetSoma = (int *) malloc(sizeof(int) * n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &vet1[i]);
    }
    
    for(int i=0; i<n; i++){
        scanf("%d", &vet2[i]);
        vetSoma[i] = vet1[i] + vet2[i];
        printf("%d ", vetSoma[i]);
    }
    free (vet1); free (vet2); free (vetSoma);
}