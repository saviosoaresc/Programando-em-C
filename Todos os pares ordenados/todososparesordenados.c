#include <stdio.h>
int main(){
    int n1;
    scanf("%d", &n1);
    int vet1[n1];
    for(int i=0; i<n1; i++){
      scanf("%d", &vet1[i]);  
    }
    
    int n2;
    scanf("%d", &n2);
    int vet2[n2];
    for(int i=0; i<n2; i++){
      scanf("%d", &vet2[i]);  
    }
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            printf("(%d,%d) ", vet1[i], vet2[j]);
        }
    }
    
    
}