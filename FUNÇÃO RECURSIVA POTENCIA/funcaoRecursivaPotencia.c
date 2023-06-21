#include <stdio.h>

int calcularPotencia(int b, int e){
    int result=1;
    if(e == 0) result = 1;
    else result = b * calcularPotencia(b, e-1);
    
    return result;
}

int main(){
    int b, e;
    scanf("%d %d", &b, &e);
    int potencia = calcularPotencia(b, e);
    printf("%d", potencia);
}