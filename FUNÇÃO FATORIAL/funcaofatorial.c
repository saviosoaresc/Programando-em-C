#include <stdio.h>

int calcularFatorial(int n){
    int result = 0;
    if(n <= 1) result = 1;
    else result = n * calcularFatorial(n-1);
    
    return result;
}

int main(){
    int n;
    scanf("%d", &n);
    int fatorial = calcularFatorial(n);
    printf("%d", fatorial);
}