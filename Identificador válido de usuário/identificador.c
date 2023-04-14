#include<stdio.h>
#include<stdbool.h>
int main(){
    int a,b,c,d,e;
    bool um, dois, tres, quatro;
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    if(a%2!=0 && c%2!=0 && e%2!=0){
        um = true;
    }else um = false;
    if(b%2==0 && d%2==0){
        dois = true;
    }else dois=false;
    if(c == a + 4){
        tres = true;
    }else tres=false;
    if(e == c + 2){
        quatro = true;
    }else quatro=false;
    
    if(um == true && dois==true && tres==true && quatro==true){
        printf("SIM");
    }else
    printf("NAO");
}