#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int vet[n], vetI[n];
    
    // for(int i=0; i<n; i++){
    //     scanf("%d", &vet[i]);
    //     vetI[n-1-i] = vet[i];
    // }
    
    // for(int i=0; i<n; i++){
    //     printf("%d ", vetI[i]);
    // }
    
    for(int i=n-1, j = 0; i>=0; i--, j++){
        scanf("%d", &vet[j]);
        vetI[i] = vet[j];
    }
    
    for(int i=0; i<n; i++){
        printf("%d ", vetI[i]);
    }
}