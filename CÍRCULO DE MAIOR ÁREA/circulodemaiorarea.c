#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

typedef struct {
    float raio;
} Circulo;

float verificarArea(int n, Circulo circulo[n]){
    float area[n];
    for(int i=0; i<n; i++){
        area[i] = 3.14 * pow(circulo[i].raio, 2);
    }
    
    float maior = area[0];
    for(int i=0; i<n; i++){
        if(area[i] > maior){
            maior = area[i];
        }
    }
    
    return maior;
}

int main(){
    int n;
    scanf("%d", &n);
    Circulo circulo[n];
    Ponto ponto[n];
    
    for(int i=0; i<n; i++){
        scanf("%f %f %f", &ponto[i].x, &ponto[i].y, &circulo[i].raio);
    }
    
    float result = verificarArea(n, circulo);
    printf("%.2f", result);
    
    
}



















