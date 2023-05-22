#include <stdio.h>
int main(){
    int n, busca, indice=-1;
    scanf("%d", &n);
    int num[n];
    
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
        scanf("%d", &busca);
    
    for(int i=0; i<n;i++){
        if(num[i] == busca){
            indice = i;
        }
    }
    
    printf("%d", indice);
}