#include <math.h>
#include <stdio.h>
int main(){
    float c, i, j, p, m;
    int t;
    
    scanf("%f %f %d", &c, &i, &t);
    
    m = c * pow((1 + (i/100)), t);
    j = m - c;
    p = (j / c) * 100;
    
    printf("A aplicacao rendeu %.2f reais que equivale a um rendimento percentual de %.2f%%.", j, p);
}