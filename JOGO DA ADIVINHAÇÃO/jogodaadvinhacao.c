#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(NULL));
    int chave = rand() % 1024 + 1;
    // printf("%d\n", chave);
    int chute=-1, index=0;
    
    while(chute != chave){
        printf("Tente advinhar a chave: ");
        scanf("%d", &chute);
        if(chute > chave){
            printf("Errrou: Maior\n");
        }else if(chute < chave){
            printf("Errrou: Menor\n");  
        } 
        
        if(chute != chave){
            index++;
        }
    }
    printf("Acertou Mizeravi!!\n\nVoce precisou de %d tentativas!!!!", index+1);
    
}