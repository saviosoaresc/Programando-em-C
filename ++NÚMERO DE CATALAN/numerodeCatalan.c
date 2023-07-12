#include <stdio.h>

int calcularCatalan(int n){
    int result = 0;
    if(n < 1) result = 1;
    else{
        for (int i = 0; i < n; i++)
        result += calcularCatalan(i) * calcularCatalan(n - i - 1);
    }
    return result;
}

int main(){
    int n;
    scanf("%d", &n);
    int catalan = calcularCatalan(n);
    printf("%d", catalan);
}