#include <stdio.h>
int main(){
    int n1, indice=0;
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
        int encontrado=0;
        for(int j=0; j<n2; j++){
            if(vet1[i] == vet2[j]){
                encontrado =1;
                break;
            }
        }
        if(encontrado){
            indice++;
        }
    }
    if(indice == n1){
        printf("Contido");
    }else printf("Nao contido");
    
}