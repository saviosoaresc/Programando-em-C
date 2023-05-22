#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int num[n], final=0;
    
    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    
    for(int i=0, j=n-1; i<n; i++, j--){
        final += num[i] * pow(10, j);
    }
    
    printf("%d", final);
}