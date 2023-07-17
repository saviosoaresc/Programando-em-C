#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

float distancia(Ponto p1, Ponto p2){
    float d = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return d;
}

Ponto proximo(int n, Ponto ponto[], Ponto central){
    Ponto result = ponto[0];
    for(int i=0; i<n; i++){
        float dist1 = distancia(ponto[i], central);
        float dist2 = distancia(result, central);
        if(dist1 < dist2){
            result = ponto[i];
        }
    }
    return result;
}


int main(){
    int n;
    scanf("%d", &n);
    Ponto ponto[n];
    Ponto central;
    for(int i=0; i<n; i++){
        scanf("%f %f", &ponto[i].x, &ponto[i].y);
    }
    
    scanf("%f %f", &central.x, &central.y);
    
    Ponto result = proximo(n, ponto, central);
    
    printf("%.2f %.2f", result.x, result.y);
    
    
    
    
}