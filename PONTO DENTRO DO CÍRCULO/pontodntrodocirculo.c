#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

typedef struct {
    float raio;
} Circulo;

float calcularDistancia(Ponto ponto1, Ponto ponto2){
    float d = sqrt(pow((ponto2.x - ponto1.x), 2) + pow((ponto2.y - ponto1.y), 2));
    return d;
}

int verificarContido(Ponto ponto1, Ponto ponto2, Circulo circulo){
    float distancia = calcularDistancia(ponto1, ponto2);
    if(distancia < circulo.raio) return 1;
    else return 0;
}

int main(){
    Ponto ponto1;
    Ponto ponto2;
    Circulo circulo;
    scanf("%f %f %f", &ponto1.x, &ponto1.y, &circulo.raio);
    scanf("%f %f", &ponto2.x, &ponto2.y);
    
    int verificacao = verificarContido(ponto1, ponto2, circulo);
    
    printf("%d", verificacao);
    
    
    
}