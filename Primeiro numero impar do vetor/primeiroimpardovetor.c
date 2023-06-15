#include <stdio.h>
int main(){
    int n, i=0;
    scanf("%d", &n);
    int vet[n];
    
    while(i < n){
        scanf("%d", &vet[i]);
        i++;
    }
    int i2 = 0;
    while(vet[i2]%2 == 0){
        i2++;
    }
    
    
    printf("%d", i2);
}