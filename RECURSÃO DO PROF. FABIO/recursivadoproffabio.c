#include <stdio.h>

int Fabio(int n, int m){
    int valor;
    if(n<3 || m<3){
        valor = 1;
    }else if(n%2 == 0 && m%2 != 0){
        valor = Fabio(n-1, m) + 1;
    }else if(n%2 != 0 && m%2 == 0){
        valor = Fabio(n-1, m-2) + 2;
    }else if(n%2 == 0 && m%2 == 0){
        valor = Fabio(n-2, m-1) + 3;
    }else if(n%2 != 0 && m%2 != 0){
        valor = Fabio(n, m-1) + 4;
    }
    return valor;
}




int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    
    int result = Fabio(n, m);
    
    printf("%d", result);
}