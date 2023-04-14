#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    
    if((a+b) >= c && (a+c) >= b && (b+c) >= a){
        if(a==b && a==c){
            printf("EQ\n");
        } else if(a==b || b==c || a==c){
            printf("IS\n");
        } else
            printf("ES\n");
    } else
    printf("NT");
}