#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,somaP=0,somaI=0;
    scanf("%d", &n);
    int num[n];
    
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
        if(num[i]%2==0){
            somaP += num[i];
        } else{
            if(num[i]%2 != 0 && i==0){
                continue;
            } else{
                somaI -= abs(num[i] - (num[i-1]));
            }
        } 
    }
    int somatorio = somaP + somaI;
    printf("%d", somatorio);
}