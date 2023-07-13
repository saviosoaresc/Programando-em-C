#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;


int main(){
    Ponto ponto1;
    Ponto ponto2;
    scanf("%f %f", &ponto1.x, &ponto1.y);
    scanf("%f %f", &ponto2.x, &ponto2.y);
    
    float d = sqrt(pow((ponto2.x - ponto1.x), 2) + pow((ponto2.y - ponto1.y), 2));
    
    printf("%.2f", d);
}