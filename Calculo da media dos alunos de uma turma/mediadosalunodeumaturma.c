#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    float nota1[n],nota2[n], media[n];
    
    for(int i=0; i<n; i++){
        scanf("%f", &nota1[i]);
        
    }
    
    for(int i=0; i<n; i++){
        scanf("%f", &nota2[i]);
        media[i] = (nota1[i] + nota2[i])/2;
        printf("%.2f ", media[i]);
    }
}