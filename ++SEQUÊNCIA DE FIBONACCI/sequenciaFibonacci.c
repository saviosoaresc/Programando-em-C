#include <stdio.h>

int calcularUltimoTermo(int n){
    int result=1;
    if(n <= 2) result = 1;
    else result = calcularUltimoTermo(n-1) + calcularUltimoTermo(n-2);
    
    return result;
}

int main(){
    int n;
    scanf("%d", &n);
    int enesimo = calcularUltimoTermo(n);
    printf("%d", enesimo);
}