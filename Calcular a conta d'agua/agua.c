#include <stdio.h>
int main(){
    int m3, pag;
    scanf("%d", &m3);
    if(m3 <= 10){
        pag = 7;
    }
    if(m3>=11 && m3 <=30){
        pag = ((m3 - 11 + 1)*1)+7;
    }
    if(m3>=31 && m3<=100){
        pag = ((m3 - 31 + 1)*2)+27;
    }
    if(m3>=101){
        pag = ((m3 - 101 + 1)*5)+167;
    }
    printf("R$ %d", pag);
}