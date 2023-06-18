#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(NULL));
    int chute, index=0, estado=0;
    printf("Pense no numero inteiro entre 1 e 1024\n\n");
    int inf=1, sup=1024;
    
    while(estado != 3){
        chute = inf + rand() % (sup - inf);
        printf("Meu chute eh: %d\n", chute);
        printf("Diga como estou: "); // 1(Menor) 2(Maior) 3(Acertou)
        scanf("%d", &estado);
        if(estado == 1){
            inf = chute + 1;
            if(sup == inf){
                printf("%d\n", chute+1);
                estado = 3;
            }
        }else if(estado == 2){
              sup = chute - 1;
              if(sup == inf){
                printf("%d\n", chute-1);
                estado = 3;
              }
        } 
        
        if(estado != 3){
            index++;
        }
        
    }
    if(estado == 3 || chute == 1){
        printf("Acertei Mizeravi!!\n\nAcertei em %d tentativas!!!!", index+1);
    }
    
}