#include <stdio.h>

int calcularRecursao(int m, int n){
    int result = 1;
    if(m>1 && n>1){
        result = calcularRecursao(m, n-1) + calcularRecursao(m-1, n);
    }else if(m == 1){
        result = n+1;
    } else if(n ==1) result = m+1;

    return result;
}

int main(){
    int n, m;
    scanf("%d %d", &m, &n);
    int resultado = calcularRecursao(m, n);
    printf("%d", resultado);
}