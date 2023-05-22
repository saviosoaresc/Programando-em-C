#include <stdio.h>
int main(){
    int n, contM=0,contm=0, maior=-9999999, menor=9999999;
    scanf("%d", &n);
    int num[n];
    
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
        
        if(num[i] > maior){
            maior = num[i];
        }
        if(num[i] < menor){
            menor = num[i];
        }
    }
    
    for(int i=0; i<n;i++){
        if(num[i] == maior){
            contM++;
        }
        if(num[i] == menor){
            contm++;
        }
    }
    
    printf("(%d,%d) (%d,%d)", contm, menor, contM, maior);
}