#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b, &c);
    
    int maior =a;
    if(b>a){
        maior=b;
    }
    if(c>b && c>a){
        maior = c;
    }
    
    float media = (a+b+c)/2;
    if(maior <= media){
        printf("Segundo Turno\n");
    }else
        printf("Primeiro Turno\n");
}