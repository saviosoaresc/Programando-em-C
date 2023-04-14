#include <stdio.h>
    int main(){
        float x, y;
        char sinal;
        
        scanf("%c %f %f", &sinal, &x, &y);
        
        if(sinal == '+'){
            float soma = x + y;
            printf("%f", soma);
        } else if(sinal == '-'){
            float sub = x - y;
            printf("%f", sub);
        } else if(sinal == '*'){
            float mult = x * y;
            printf("%f", mult);
        }else if(sinal == '/' && y!=0){
            float divi = x / y;
            printf("%f", divi);
        } else{
            printf("Operacao invalida");
        }
        
    }