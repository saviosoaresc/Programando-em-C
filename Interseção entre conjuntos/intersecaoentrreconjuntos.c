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
    
    int nInter = n1;
    if(n2 < nInter){
        nInter = n2;
    }
    int vetInter[nInter];
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(vet1[i] == vet2[j]){
                vetInter[indice] = vet1[i];
                indice++;
                break;
            }
        }
    }
    
    for(int i=0; i<nInter;i++){
        printf("%d ", vetInter[i]);
    }
}