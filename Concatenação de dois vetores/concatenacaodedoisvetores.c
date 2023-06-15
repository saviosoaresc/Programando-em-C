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
    
    int n3=n1+n2;
    int vet3[n3];
    printf("%d\n", n3);
    for(int i=0; i<n1;i++){
        printf("%d, ", vet1[i]);
    }
    for(int j=0; j<n2;j++){
        printf("%d, ", vet2[j]);
    }
    // printf("%d\n", n3);
    // for(int i=0; i<n3;i++){
    //     printf("%d ", vet3[i]);
    // }
}