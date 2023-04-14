#include <stdio.h>
int main(){
    float n1, n2, n3;
    scanf("%f%f%f",&n1,&n2,&n3 );
    
    float media = (n1+n2+n3)/3;
    if(media >= 7){
        printf("Aprovado");
    }else if(media < 4){
        printf("Reprovado");
    } else{
        float af;
        scanf("%f", &af);
        if(af < 4){
            printf("Reprovado");
        }else{
            float mediaF = (af+media)/2;
            if(mediaF>=5){
                printf("Aprovado");
            } else
                printf("Reprovado");
        }
    }
    
}