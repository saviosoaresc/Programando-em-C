#include <stdio.h>
int main(){
    int febre;
    scanf("%d", &febre);
    
    if(febre == 1){
        int garganta;
        scanf("%d", &garganta);
        if(garganta == 1){
            printf("gripe\n");
        }else printf("mal-estar\n");
    } else {
        int tontura;
        scanf("%d", &tontura);
        if(tontura == 0){
            int calafrio;
            scanf("%d", &calafrio);
            if(calafrio == 0){
                printf("sem doenca\n");
            } else printf("resfriado\n");
        } else{
            int zumbido;
            scanf("%d", &zumbido);
            if(zumbido == 1){
                printf("labirintite\n");
            }else{
                int dordeCabeca;
                scanf("%d", &dordeCabeca);
                if(dordeCabeca == 1){
                    printf("dengue\n");
                } else printf("indigestao\n");
            }
        }
    }
}