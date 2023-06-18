#include <stdio.h>
int main(){
    int n;
    char ope;
    scanf("%d", &n);
    int vet1[n], vet2[n], vetR[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &vet1[i]);
    }
    
    for(int i=0; i<n; i++){
        scanf("%d", &vet2[i]);
    }
    scanf(" %c", &ope);
    for(int i=0; i<n; i++){
                if(ope == '+'){
                    vetR[i] = vet1[i] + vet2[i];
                }else if(ope == '-'){
                    vetR[i] = vet1[i] - vet2[i];
                }else if(ope == '*'){
                    vetR[i] = vet1[i] * vet2[i];
                }else if(ope == '/'){
                    vetR[i] = vet1[i] / vet2[i];
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", vetR[i]);
    }
}







